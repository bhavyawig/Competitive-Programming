#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(int node,vector<int> &vis, vector<int> adj[])
{
    vis[node]=1;
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
            dfs(itr,vis,adj);
    }
}

int main()
{
  lli n,d;
  cin>>n>>d;
  vector<int> adj[n];
  vector<int> x(n);
  vector<int> y(n);
  for(int i=0;i<n;i++)
  {
      lli u,v;
      cin>>u>>v;
     x[i]=u;
     y[i]=v;
  }
 // for(int i=0;i<n;i++)
   // cout<<x[i]<<" "<<y[i];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) <= d * d)
          {
            //  if(i==2) cout<<(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])<<endl;
              adj[i].push_back(j);
              adj[j].push_back(i);
          }
      }
  }
 // for(auto itr:adj[0])
 // {
   //   cout<<itr<<" ";
  // }
  vector<int> vis(n,0);
  //cout<<vis[0]<<endl;
  dfs(0,vis,adj);
  for(int i=0;i<n;i++)
  {
      if(vis[i]==1) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
  }

    return 0;

}
