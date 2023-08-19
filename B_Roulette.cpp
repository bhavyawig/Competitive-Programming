#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
  // cout<<n;
   vector<vector<lli>> vec;
   for(lli i=0;i<n;i++)
   {
    lli c;
    cin>>c;
    //cout<<c;
    vector<lli> temp;
    for(lli j=0;j<c;j++)
    {
        lli a; cin>>a;
        temp.push_back(a);
    }
    vec.push_back(temp);
   }
   lli x; cin>>x;
   // for(lli i=0;i<vec.size();i++)
   //{
    //for(lli j=0;j<vec[i].size();j++)
    //{
     //   cout<<vec[i][j]<<" ";
    //}
    //cout<<endl;
   // }
   priority_queue<pair<lli,lli>, vector<pair<lli,lli>>, greater<pair<lli,lli>>> pq;
   for(lli i=0;i<vec.size();i++)
   {
    for(lli j=0;j<vec[i].size();j++)
    {
        if(vec[i][j]==x)
        {
            pq.push({vec[i].size(),i+1});
        }
    }
   }
   if(pq.empty()==true)
   cout<<"0"<<endl;
   else
   {
    int val=pq.top().first;
    vector<lli> ans;
    while(pq.empty()==false && pq.top().first==val)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
   }
    return 0;
}