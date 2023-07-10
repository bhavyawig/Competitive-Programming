#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  lli n,m;
   cin>>n>>m;
   vector<vector<lli>> adj[n+1];
   for(lli i=0;i<m;i++)
   {
       vector<lli> t;
       lli a,b,w;
       cin>>a>>b>>w;
       t.push_back(b);
      t.push_back(w);
      adj[a].push_back(t);
   }
   vector<lli> vis(n+1,0);
   vector<lli> dist(n+1,INT_MAX);
   priority_queue<pair<lli,lli>,vector<pair<lli,lli>>, greater<pair<lli,lli>>> pq;
   dist[1]=0;
   pq.push({0,1});
   while(pq.empty()==false)
   {
       lli vol=pq.top().second;
       lli uff=pq.top().first;
       pq.pop();
       for(auto itr: adj[vol])
       {
           lli val=itr[1];
           lli gg=itr[0];
           if(dist[gg]>val+uff)
           {
               dist[gg]=val+uff;
              pq.push({dist[gg],gg});
           }
       }
   }
   for(int i=1;i<=n;i++)
    cout<<dist[i]<<" ";
    return 0;

}
