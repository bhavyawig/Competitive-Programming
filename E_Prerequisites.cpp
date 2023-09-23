#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(lli node, vector<lli> &vis, vector<lli> adj[],vector<lli> &ans)
{
    vis[node]=1;
      if(node!=1)
    ans.push_back(node);
    for(auto itr:adj[node])
    {
        if(vis[itr]==0)
        dfs(itr,vis,adj,ans);
    }
}

int main()
{
  lli n;
  cin>>n;
  vector<lli> adj[n+1];
  vector<lli> ans;
  vector<lli> vis(n+1,0);
  for(int i=0;i<n;i++)
  {
    lli c; cin>>c;
    for(int j=0;j<c;j++)
    {
        lli p; cin>>p;
        adj[i+1].push_back(p);
        adj[p].push_back(i+1);
    }
  }
  dfs(1,vis,adj,ans);
 // reverse(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++)
  cout<<ans[i]<<" ";
    return 0;
}