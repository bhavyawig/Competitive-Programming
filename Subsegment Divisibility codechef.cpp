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
       lli mul=n,k=1;
       lli sum=0;
       if(n==1)
       {
           cout<<"1"<<endl;
       }
       else if(n==2)
       {
           cout<<"3 4"<<endl;
       }
       else if(n==3)
       {
           cout<<"2 5 7"<<endl;
       }
       else{
       for(lli i=0;i<n;i++)
       {
           mul=(n*k)+1;
           sum=sum+mul;
           if(sum%n==0)
           {
               cout<<mul+1<<" ";
               sum++;
           }
           else
           {
                cout<<mul<<" ";
           }
           k++;
       }
           cout<<endl;
       }
   }

    return 0;
}

