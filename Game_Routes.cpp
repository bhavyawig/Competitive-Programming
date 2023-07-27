#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
vector<lli> temp;
lli ans=0;
// vector<vector<lli> > ans(1e10,vector<lli> (1e10));

void dfs(lli node, vector<lli> adj[], vector<lli> &vis, vector<lli> &vec)
{
    vis[node]=1;
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
        dfs(itr,adj,vis,vec);
    }
   vec.push_back(node);
    //temp.pop_back();
}

int main()
{
    lli n,m;
   cin>>n>>m;
   vector<lli> adj[n+1];
   for(lli i=0;i<m;i++)
   {
       lli a,b;
       cin>>a>>b;
       adj[a].push_back(b);
   }
   vector<lli> vis(n+1,0);
    vector<lli> vec;
   dfs(1,adj,vis,vec);
   vector<lli> path(n+1);
   path[1]=1;
   reverse(vec.begin(),vec.end());
   lli mod=1e9+7;
   for(lli i=0;i<vec.size();i++)
   {
    for(auto itr: adj[vec[i]])
    {
      path[itr]+=path[vec[i]]%mod;
      path[itr]=path[itr]%mod;
      path[itr]=path[itr]%mod;
    }
   }
   cout<<path[n]<<endl;
   //cout<<ans<<endl;
 return 0;
 
}