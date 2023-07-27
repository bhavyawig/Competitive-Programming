#include<bits/stdc++.h>
using namespace std;
stack<long long int> s;
vector<long long int> re;
void dfs(long long int node, vector<long long int> &vis, vector<long long int> adj[])
{
    vis[node]=1;
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
        dfs(itr,vis,adj);
    }
    s.push(node);
}

void  dfs1(long long int node, vector<long long int> &vis, vector<long long int> adj[])
{
    vis[node]=1;
    re.push_back(node);
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
        dfs(itr,vis,adj);
    }
   // s.push(node);
}


int main()
{
    int n,m;
   cin>>n>>m;
   vector<long long int> adj[n+1];
   vector<long long int> adj1[n+1];
   for(long long int i=0;i<m;i++)
   {
    long long int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj1[b].push_back(a);
   }
   vector<long long int> vis(n+1,0);
   vector<long long int> viss(n+1,0);
   for(long long int i=1;i<=n;i++)
   {
    if(vis[i]==0){
    dfs(i,vis,adj);
    }
   }
   vector<vector<long long int>> ans;
   while(s.empty()==false)
   {
    long long int node=s.top();
    s.pop();
    if(viss[node]==0){
    dfs1(node,viss,adj1);
    ans.push_back(re);
    re.clear();
    }
   }
   if(ans.size()==1) cout<<"YES"<<endl;
   else
   {
    cout<<"NO"<<endl;
    cout<<ans[1][0]<<" "<<ans[0][0]<<endl;
   }
   return 0;
}