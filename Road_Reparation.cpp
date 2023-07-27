#include<bits/stdc++.h>
using namespace std;
void dfs(long long int node, vector<long long int> adj[], vector<long long int> &vis)
{
    vis[node]=1;
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
        dfs(itr,adj,vis);
    }
}

long long int findparent(long long int node,vector<long long int> &parent)
{
    if(parent[node]==node) return node;

    return parent[node]=findparent(parent[node],parent);
}

void union1(long long int ulp1,long long int ulp2, vector<long long int> &rank,
vector<long long int> &parent)
{
    if(rank[ulp1]<rank[ulp2])
    {
        parent[ulp1]=ulp2;
    }
    else if(rank[ulp2]<rank[ulp1])
    {
        parent[ulp2]=ulp1;
    }
    else
    {
        parent[ulp2]=ulp1;
        rank[ulp1]++;
    }
}

int main()
{
    long long int n,m;
    cin>>n>>m;
 vector<pair<long long int,pair<long long int,long long int>>> m1;
   vector<long long int> adj[n+1];
   vector<long long int> vis(n+1,0);
    for(long long int i=0;i<m;i++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
       m1.push_back({c,{a,b}});
       adj[a].push_back(b);
       adj[b].push_back(a);
    }
    long long int cnt=0;
    for(long long int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,adj,vis);
            cnt++;
        }
    }
    if(cnt>=2) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        sort(m1.begin(),m1.end());
         vector<long long int> rank(n+1,0);
         vector<long long int> parent(n+1);
        for(long long int i=1;i<=n;i++)
             parent[i]=i;
             // for(int i=1;i<=n;i++)
        //   cout<<parent[i]<<" "<<rank[i]<<endl;
       long long int ans=0,no=0;
      for(auto itr: m1)
      {
       long long int dist=itr.first;
       long long int ulp1=findparent(itr.second.first,parent);
       long long int ulp2=findparent(itr.second.second,parent);

        if(ulp1!=ulp2)
        {
            ans+=dist;
            union1(ulp1,ulp2,rank,parent);
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}