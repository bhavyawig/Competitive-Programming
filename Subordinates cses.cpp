#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int dfs(vector<int> adj[], vector<int> &vec, int node,vector<int> &vis)
{
    vis[node]=1;
    lli ro=0;
    for(auto itr:adj[node])
    {
        if(vis[itr]==0)
            ro+=dfs(adj,vec,itr,vis);
    }

   // vis[node]=0;
   //cout<<vec[node]<<" "<<node<<endl;
   return  vec[node]=ro+1;
   //cout<<vec[node]<<" "<<node<<endl;

}


int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(int i=0;i<n-1;i++)
    cin>>a[i];
   vector<int> adj[n+1];
   vector<int> vis(n+1,0);
   //adj[1].push_back(1);
   for(int i=0;i<n-1;i++)
   {
       //adj[i+2].push_back(a[i]);
       adj[a[i]].push_back(i+2);
   }
  // vector<int> vis(n+1,0);
   vector<int> vec(n+1);
       dfs(adj,vec,1,vis);
   for(int i=1;i<=n;i++)
    cout<<vec[i]-1<<" ";

    return 0;

}
