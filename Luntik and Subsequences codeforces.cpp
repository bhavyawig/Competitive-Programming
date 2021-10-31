
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,count0=0,count1=0;
       cin>>n;
       lli a[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]==1)
           {
               count1++;
           }
           if(a[i]==0)
           {
               count0++;
           }
       }
       lli ans=pow(2,count0);
       ans*=count1;
       cout<<ans<<endl;
   }

    return 0;
}
