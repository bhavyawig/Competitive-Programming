#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli store=0,ans;
pair<lli,lli> bfs(lli node, vector<lli> adj[], vector<lli> &vis)
{
    queue<pair<lli,lli>> q;
     ans=0;
    q.push({node,0});
    vis[node]=1;
    pair<lli,lli> re1;
    while(q.empty()==false)
    {
        re1=q.front();
        lli temp=q.front().first;
        lli dist=q.front().second;
        q.pop();
        vis[temp]=1;
        for(auto itr : adj[temp])
        {
            if(vis[itr]==0) 
            {
                q.push({itr,dist+1});
                store=itr;
            }
        }
    }
    return re1;
}

int main()
{
    lli n;
    cin>>n;
    vector<lli> adj[n+1];
    if(n==1) cout<<"0"<<endl;
    else{
    for(lli i=0;i<n-1;i++)
    {
        lli a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<lli> vis(n+1,0);
    vector<lli> viss(n+1,0);
   pair<lli,lli> o= bfs(1,adj,vis);
    //cout<<store;
   pair<lli,lli> re= bfs(store,adj,viss);
    cout<<re.second<<endl;
    }
    return 0;
}