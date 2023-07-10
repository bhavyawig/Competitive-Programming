#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ans=1;
vector<lli> temp;
bool dfs(vector<lli> adj[], vector<lli> &vis, vector<lli> &vec,lli node,lli prt)
{
    vis[node]=1;
    vec.push_back(node);
    cout<<node<<endl;
    for(auto itr:adj[node]) // 1 3 5 4
    {
        if(vis[itr]==0)
        {
            if(dfs(adj,vis,vec,itr,node))
            {
                temp=vec;
                return true;
            }
        }
        else if(itr!=prt)
            {
                temp=vec;
                return true;
            }
    }
    vec.pop_back();
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
       adj[b].push_back(a);
   }
   vector<lli> vis(n+1,0);
   vector<lli> vec;
   lli no=0;
   for(int i=1;i<=n;i++)
   {
       if(vis[i]==0){
        if(dfs(adj,vis,vec,i,-1))
           {
               temp.push_back(i);

              //cout<<i<<endl;
              no++;
              break;
           }
       }
   }
   if(no==0) cout<<"IMPOSSIBLE"<<endl;
   else
   {
       cout<<temp.size()<<endl;
       for(int i=0;i<temp.size();i++)
        cout<<temp[i]<<" ";
   }


    return 0;

}
