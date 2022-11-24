#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(lli u, vector<lli> adj[], lli* vis, lli* inDeg, lli* outDeg)
{
    vis[u] = 1;
    for (auto v : adj[u])
    {
        outDeg[u] = 1;
        inDeg[v] = 1;
          if (vis[v] == 0)
        {
            dfs(v, adj, vis, inDeg, outDeg);
        }
    }
}

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m;
       cin>>n>>m;
       vector<lli> adj[n+1];
       for(lli i=0;i<m;i++)
       {
           lli x,y;
           cin>>x>>y;
           adj[x].push_back(y);
       }
           lli inDeg[n+ 1] = { 0 };
           lli outDeg[n+ 1] = { 0 };
           lli vis[n+ 1] = { 0 };
    dfs(1, adj, vis, inDeg, outDeg);
      lli minEdges = 0;
    lli totalIndegree = 0;
    lli totalOutdegree = 0;
    for (lli i = 1; i <=n; i++)
    {
        if (inDeg[i] == 1)
            totalIndegree++;
        if (outDeg[i] == 1)
            totalOutdegree++;
    }
    minEdges = max(n- totalIndegree, n- totalOutdegree);
    cout<<minEdges<<endl;
   }

    return 0;
}


