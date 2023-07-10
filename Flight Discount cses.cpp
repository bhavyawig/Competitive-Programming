#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ll;
vector<vector<ll>> d(2,vector<ll>(100002,1e18));
void djkstra(ll i, ll src,vector<vector<ll>> adj[])
{
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    d[i][src]=0;
    pq.push({0,src});
    while(pq.empty()==false)
    {
        ll node=pq.top().second;
        ll dist=pq.top().first;
        pq.pop();
        if(dist>d[i][node])
            continue;
        for(auto itr: adj[node])
        {
            ll val=itr[1];
            ll dot=itr[0];
            if(d[i][dot]>dist+val)
            {
                d[i][dot]=dist+val;
                pq.push({d[i][dot],dot});
            }
        }
    }
}


int main()
{
   ll n,m;
   cin>>n>>m;
   vector<vector<ll>> adj[n+1];
   vector<vector<ll>> adj2[n+1];
   for(ll i=0;i<m;i++)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       adj[a].push_back({b,c});
       adj2[b].push_back({a,c});
   }
   djkstra(0,1,adj);
   djkstra(1,n,adj2);
  // for(int i=1;i<=n;i++)
   // cout<<d[1][i]<<" ";
   ll ans=1e18;
   for(ll i=1;i<=n;i++)
   {
       for(auto itr: adj[i])
       {
           ll  uff=itr[0];
           ll  kr=itr[1];
           ans=min(ans,d[0][i]+d[1][uff]+(kr/2));
       }
   }
   cout<<ans<<endl;

    return 0;

}
