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
       lli maxi=INT_MIN;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(maxi<a[i])
           {
               maxi=a[i];
           }
       }
       lli ans=INT_MIN;
       for(int i=0;i<n;i++)
       {
           lli diff=maxi-a[i];
           ans=max(ans,diff);
       }
       cout<<ans<<endl;
   }

    return 0;
}
