#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ans=1;
lli cycle_node,endd;
vector<lli> temp;
bool dfs(vector<lli> adj[], vector<lli> &vis, vector<lli> &pp,lli node,lli prt, vector<lli> &path)
{
    vis[node]=1;
    path[node]=1;
    pp[node]=prt;
   // cout<<node<<endl;
    for(auto itr:adj[node]) // 1 3 5 4
    {
        if(vis[itr]==0)
        {
            if(dfs(adj,vis,pp,itr,node,path))
            {
                return true;
            }
        }
        else if(path[itr]==1)
            {
                cycle_node=node;
                endd=itr;
                return true;
            }
    }
    path[node]=0;
    //vec.pop_back();
    return false;
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
     //  adj[b].push_back(a);
   }
   vector<lli> vis(n+1,0);
    vector<lli> path(n+1,0);
   vector<lli> pp(n+1);
   lli no=0;
   for(int i=1;i<=n;i++)
   {
       if(vis[i]==0){
        if(dfs(adj,vis,pp,i,-1,path))
           {
              // temp.push_back(i);
              //cout<<i<<endl;
              no++;
              break;
           }    
       }
   }
   if(no==0) cout<<"IMPOSSIBLE"<<endl;
   else
   {
       vector<lli> temp;
       temp.push_back(cycle_node);
       lli uff=cycle_node;
       while(uff!=endd)
       {
        temp.push_back(pp[uff]);
        uff=pp[uff];
       }
       temp.push_back(cycle_node);
       reverse(temp.begin(),temp.end());
       cout<<temp.size()<<endl;
       for(lli i=0;i<temp.size();i++)
       cout<<temp[i]<<" ";
   }


    return 0;

}
