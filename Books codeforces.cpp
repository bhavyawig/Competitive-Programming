#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,t;
   cin>>n>>t;
   lli a[n],c[n];
   lli hai=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli sum=a[0],strt=0;
   lli ans=INT_MIN;
    if(a[0]<=t)
       {
           hai++;
       }
   for(lli i=1;i<=n;i++)
   {
       while(sum>t && strt<i-1)
       {
           sum-=a[strt];
           strt++;
       }
       if(sum<=t)
       {
           ans=max(ans,i-strt);
       }
       if(i<n)
       {
           sum+=a[i];
       }
       if(a[i]<=t)
       {
           hai++;
       }
   }
   if(ans==INT_MIN && hai>=1)
   {
       cout<<1<<endl;
   }
   else if(ans==INT_MIN && hai==0)
   {
       cout<<0<<endl;
   }
   else{
   cout<<ans<<endl;
   }

    return 0;
}

