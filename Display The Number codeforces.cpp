#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       if(n==2)
        cout<<1<<endl;
       else if(n==3)
        cout<<7<<endl;
       else if(n==4)
        cout<<11<<endl;
       else
       {
           lli no=n/2;
           lli x=0;
           n=n-(2*no);
           if(n==1){
            cout<<7;
            x++;
            }
            if(x==0){
           for(lli i=0;i<no;i++)
            cout<<1;
            }
            else
            {
                for(lli i=1;i<no;i++)
            cout<<1;
            }
                   cout<<endl;
       }
   }

    return 0;
}
