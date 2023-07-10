#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(vector<lli> adj[], vector<lli> &vis, lli node)
{
    vis[node]=1;
    for(auto itr:adj[node])
    {
        if(vis[itr]==0)
            dfs(adj,vis,itr);
    }
}

int main()
{
   lli n,m;
   cin>>n>>m;
   vector<lli> adj[n+1];
   vector<lli> vis(n+1,0);
   vector<lli> vec;
   for(lli i=0;i<m;i++)
   {
       lli a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   lli cnt=0;
   for(int i=1;i<=n;i++)
   {
       if(vis[i]==0)
       {
           dfs(adj,vis,i);
           vec.push_back(i);
           cnt++;
       }
   }
   cout<<cnt-1<<endl;
   for(int i=1;i<vec.size();i++)
    cout<<vec[i-1]<<" "<<vec[i]<<endl;

    return 0;

}
