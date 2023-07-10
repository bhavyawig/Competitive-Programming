#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m,d;
   cin>>n>>m>>d;
   vector<lli> a,b;
   for(lli i=0;i<n;i++)
   {
       lli lo;
       cin>>lo;
       a.push_back(lo);
   }
    for(lli i=0;i<m;i++)
   {
       lli lo1;
       cin>>lo1;
       b.push_back(lo1);
   }
   lli ans=INT_MIN;
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   for(lli i=0;i<n;i++)
   {
       lli no=a[i]+d;
       vector<lli>::iterator upper1;
       upper1=upper_bound(b.begin(),b.end(),no);
       lli index=upper1-b.begin()-1;
       if(abs(a[i]-b[index])<=d)
       ans=max(ans,a[i]+b[index]);
   }
    for(lli i=0;i<m;i++)
   {
       lli no1=b[i]+d;
       vector<lli>::iterator upper2;
       upper2=upper_bound(a.begin(),a.end(),no1);
       lli index1=upper2-a.begin()-1;
       if(abs(b[i]-a[index1])<=d)
       ans=max(ans,b[i]+a[index1]);
   }
   if(ans==INT_MIN) cout<<"-1"<<endl;
   else cout<<ans<<endl;
    return 0;

}
