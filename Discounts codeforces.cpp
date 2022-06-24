#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> a;
   lli sum=0;
   for(lli i=0;i<n;i++)
   {
       lli samp;
       cin>>samp;
       a.push_back(samp);
       sum+=samp;
   }
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
   vector<lli> ans;
   lli add=0;
   for(lli i=0;i<n;i++)

   {
       sum=sum-a[i];
       ans.push_back(sum);
       sum=sum+a[i];
   }
   lli m;
   cin>>m;
   for(lli i=0;i<m;i++)
   {
       lli q;
       cin>>q;
       cout<<ans[q-1]<<endl;
   }

    return 0;
}
