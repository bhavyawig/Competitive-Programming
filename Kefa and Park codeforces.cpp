#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool vis[100001]={0};
lli a[100001]={0};
map<lli,vector<lli>> adj;
lli ans=0;
void dfs(lli u, bool z,lli cats_sum,lli m)
{
    lli sum=0;
    vis[u]=true;
    bool check=1;
    if(a[u]==1)
        cats_sum++;
    else
        cats_sum=0;
    if(cats_sum>m)
        z=0;
    for(auto itr:adj[u])
    {
        if(vis[itr]==false)
        {
            check=0;
            dfs(itr,z,cats_sum,m);
        }
    }
    if(check==1 && z==1)
        ans++;
}

int main()
{
   lli n,m;
   cin>>n>>m;
   for(lli i=1;i<=n;i++)
    cin>>a[i];
   for(lli i=1;i<=(n-1);i++)
   {
       lli ss,dd;
       cin>>ss>>dd;
       adj[ss].push_back(dd);
       adj[dd].push_back(ss);
   }
   dfs(1,1,0,m);
   cout<<ans<<endl;

    return 0;
}

