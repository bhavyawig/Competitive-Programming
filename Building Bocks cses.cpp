#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void dfs(lli node,vector<lli> &vis, vector<lli> grp[],vector<lli> &ans, lli check)
{
    if(check==0)
    {
        check++;
        ans.push_back(node);
    }
    vis[node]=1;
    for(auto itr : grp[node])
    {
        if(vis[itr]==0)
            dfs(itr,vis,grp,ans,check);
    }
}

int main()
{
   lli n,m;
   lli cnt=0;
   cin>>n>>m;
   vector<lli> grp[n+1];
   for(lli i=0;i<m;i++)
   {
       lli a,b;
       cin>>a>>b;
       grp[a].push_back(b);
       grp[b].push_back(a);
   }
   vector<lli> vis(n+1,0);
   vector<lli> ans;
   for(lli i=1;i<=n;i++)
   {
       if(vis[i]==0)
       {
           dfs(i,vis,grp,ans,0);
           cnt++;
       }
   }
   cout<<cnt-1<<endl;
   for(lli i=0;i<ans.size()-1;i++)
    cout<<ans[i]<<" "<<ans[i+1]<<endl;


    return 0;
}


