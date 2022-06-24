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
       lli a[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(lli i=0;i<n;i++)
       {
           a[i]=a[i]-i;
       }
       lli ans=0;
       map<lli,lli> m;
       for(lli i=0;i<n;i++)
       {
           m[a[i]]++;
       }
       for(auto &itr:m)
       {
           ans=ans+((itr.second*(itr.second-1))/2);
       }
       cout<<ans<<endl;


   }

    return 0;
}

