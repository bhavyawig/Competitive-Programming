#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++){
   lli n;
   cin>>n;
   lli a[n],b[n];
   vector<lli> ans;
   lli maxi=INT_MIN;
   for(lli i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(lli i=0;i<n;i++)
   {
    cin>>b[i];
   }
   vector<pair<lli,lli>> vec;
   for(int i=0;i<n;i++)
   {
    vec.push_back({a[i]-b[i],i+1});
    maxi=max(maxi,a[i]-b[i]);
   }
   for(int i=0;i<n;i++)
   {
    if(vec[i].first==maxi)
    ans.push_back(vec[i].second);
   }
   cout<<ans.size()<<endl;
   for(auto itr: ans)
   cout<<itr<<" ";
   cout<<endl;
    }
    return 0;
}