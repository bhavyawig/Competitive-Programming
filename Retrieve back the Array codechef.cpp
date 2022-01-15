#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x;
       cin>>n>>x;
       lli xo=0;
       for(lli i=0;i<n-1;i++)
       {
           xo=xo^i;
       }
       lli last=x^xo;
       if(last<=n-2)
       {
           if(last==0)
           {
               last=last+pow(2,17);
               lli ini=1+pow(2,17);
               for(int i=2;i<n-1;i++)
               {
                   cout<<i<<" ";
               }
               cout<<"0 "<<last<<" "<<ini<<endl;
           }
           else
           {
               last=last+pow(2,17);
               lli ini=0+pow(2,17);
               for(int i=1;i<n-1;i++)
               {
                   cout<<i<<" ";
               }
               cout<<ini<<" "<<last<<endl;
           }
       }
       else if(last>n-2 && last<=500000)
       {
           for(int i=0;i<n-1;i++)
           {
               cout<<i<<" ";
           }
           cout<<last<<endl;
       }
       else
       {
           last=last-pow(2,18);
           lli ini=0+pow(2,18);
           for(int i=1;i<n-1;i++)
           {
               cout<<i<<" ";
           }
           cout<<ini<<" "<<last<<endl;
       }
   }

    return 0;
}

