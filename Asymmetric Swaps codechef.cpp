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
       lli a[2*n];
       for(int i=0;i<(2*n);i++)
           cin>>a[i];
       sort(a,a+(2*n));
       int strt=0,end=n-1,ans=INT_MAX;
       while(end<2*n)
       {
           int mini=a[end]-a[strt];
           ans=min(ans,mini);
           end++;strt++;
       }
       cout<<ans<<endl;
   }

    return 0;
}


