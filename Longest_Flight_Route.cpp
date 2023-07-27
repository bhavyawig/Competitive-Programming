#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<lli> temp;
vector<vector<lli> > ans;

void dfs(lli node, vector<lli> adj[], vector<lli> &vis, lli n, vector<lli> &path)
{
    vis[node]=1;
    path[node]=1;
    temp.push_back(node);
    //cout<<node<<endl;
    if(node==n)
    {
      //   for(lli i=0;i<temp.size();i++)
    //     cout<<temp[i]<<" ";
      //   cout<<endl;
        ans.push_back(temp);
        temp.pop_back();
        path[node]=0;
        vis[node]=0;
        return;
    }
    for(auto itr: adj[node])
    {
        if(vis[itr]==0 || path[itr]==0)
        dfs(itr,adj,vis,n,path);
    }
    path[node]=0;
    temp.pop_back();
}

int main()
{
    lli n,m;
   cin>>n>>m;
   vector<lli> adj[n+1];
   map<lli,lli> m1;
   for(lli i=0;i<m;i++)
   {
       lli a,b;
       cin>>a>>b;
       if(m1.find(a)!=m1.end())
       {
        if(m1[a]!=b)
        {
            adj[a].push_back(b);
            m1[a]=b;
        }
       }
       else
       adj[a].push_back(b);
   }
   vector<lli> vis(n+1,0);
    vector<lli> path(n+1,0);
   dfs(1,adj,vis,n,path);
   if(ans.empty()==true) cout<<"IMPOSSIBLE"<<endl;
   else{
    lli len=0,maxi=INT_MIN,store=0;
   for(lli i=0;i<ans.size();i++)
   {
    len=ans[i].size();
    if(maxi<len)
    {
        maxi=len;
        store=i;
    }
   }
  // cout<<store<<endl;
   cout<<maxi<<endl;
   for(lli i=0;i<ans[store].size();i++)
   cout<<ans[store][i]<<" ";
   }
 return 0;
 
}