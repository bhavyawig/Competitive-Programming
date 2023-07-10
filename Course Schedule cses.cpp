#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 vector<lli> temp;

 bool cycle(vector<lli> &vis, vector<lli> &path, vector<lli> adj[], lli node)
 {
     vis[node]=1;
     path[node]=1;
     for(auto itr: adj[node])
     {
         if(vis[itr]==0){
            if(cycle(vis,path,adj,itr))
                return true;
         }
         else if(path[itr]==1)
            return true;
     }
     path[node]=0;
     return false;
 }

 void dfs(lli node, vector<lli> adj[], vector<lli> &vis)
 {
     vis[node]=1;
     for(auto itr: adj[node])
     {
         if(vis[itr]==0)
            dfs(itr,adj,vis);
     }
     temp.push_back(node);
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
       adj[b].push_back(a);
   }
        vector<lli> vis(n+1,0);
        vector<lli> vit(n+1,0);
        vector<lli> path(n+1,0);
        lli no=0;
        for(int i=1;i<=n;i++)
        {
            if(vit[i]==0 && cycle(vit,path,adj,i))
            {
                no++;
            }
        }
        //for(lli i=1;i<=n;i++)
          //  cout<<path[i]<<" ";
        if(no>=1) cout<<"IMPOSSIBLE"<<endl;
        else
        {
            for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,adj,vis);
            }
        }
        for(lli i=0;i<temp.size();i++)
        {
            cout<<temp[i]<<" ";
        }
        }

    return 0;

}
