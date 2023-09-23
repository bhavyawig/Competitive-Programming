#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool comp(const pair<lli, lli>& a, const pair<lli, lli>& b) {
    return a.first > b.first; 
}
int main()
{
   lli n;
   cin>>n;
   vector<pair<lli,lli>> vec;
   for(int i=0;i<n;i++)
   {
    lli a,b;
    cin>>a>>b;
    vec.push_back({b,a});
   }
   sort(vec.begin(),vec.end(),comp);
   int ans=0,ans1=0;
   int val=vec[0].first;
   int index=vec[0].second;
   ans+=val; ans1+=val;
   lli check=0,check1=0;
  // for(int i=0;i<n;i++)
   //{
    //cout<<vec[i].first<<" "<<vec[i].second<<endl;
   //}
   for(int i=1;i<n;i++)
   {
    if(vec[i].second==index && check==0)
    {
        ans1+=(vec[i].first)/2;
        check=1;
    }
    if(vec[i].second!=index && check1==0)
    {
        ans+=(vec[i].first);
        check1=1;
    }
   }
   cout<<max(ans,ans1);
    return 0;
}