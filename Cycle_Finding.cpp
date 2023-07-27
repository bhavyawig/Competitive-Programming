#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli cycle_node,endd;
vector<lli> temp;
lli ans=0;
bool dfs(vector<vector<lli>> adj[], vector<lli> &vis, vector<lli> &pp,lli node,lli prt, vector<lli> &path
,lli we)
{
    vis[node]=1;
    path[node]=1;
    pp[node]=prt;
    ans+=we;
   // cout<<node<<endl;
    for(auto itr:adj[node]) // 1 3 5 4
    {
        lli index=itr[0];
        lli wo=itr[1];
        if(vis[index]==0 || path[index]==0)
        {
            if(dfs(adj,vis,pp,index,node,path,wo))
            {
                return true;
            }
        }
        else if(path[index]==1)
            {
                ans+=wo;
                if(ans<0){
                cycle_node=node;
                endd=itr[0];
                return true;}
                else {
                    ans-=wo;
                return false;}
                
            }
    }
    path[node]=0;
    ans-=we;
    //vec.pop_back();
    return false;
}

int main()
{
    lli n,m;
   cin>>n>>m;
   vector<vector<lli>> adj[n+1];
   for(lli i=0;i<m;i++)
   {
       lli a,b,c;
       cin>>a>>b>>c;
       vector<lli> temp;
       temp.push_back(b);
       temp.push_back(c);
       adj[a].push_back(temp);
     //  adj[b].push_back(a);
   }
   vector<lli> vis(n+1,0);
    vector<lli> path(n+1,0);
   vector<lli> pp(n+1);
   lli no=0;
   for(int i=1;i<=n;i++)
   {
       if(vis[i]==0){
        if(dfs(adj,vis,pp,i,-1,path,0))
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
       cout<<"YES"<<endl;
       for(lli i=0;i<temp.size();i++)
       cout<<temp[i]<<" ";
   }


    return 0;
}