#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

// vector<vector<lli>> vis( 505 , vector<lli> (505, 0));
 /* void djkstra(lli node,  vector<vector<lli>> adj[])
{
    priority_queue<pair<lli,lli>, vector<pair<lli,lli>>, greater<pair<lli,lli>>> pq;
    ans[node][node]=0;
    pq.push({0,node});
    vis[node][node]=1;
    while(pq.empty()==false)
    {
        lli val=pq.top().second;
        lli dist=pq.top().first;
        pq.pop();
        for(auto itr: adj[val])
        {
            lli nodee=itr[0];
            lli we=itr[1];
            if(ans[node][nodee]>dist+we)
            {
                ans[node][nodee]=min(dist+we,ans[nodee][node]);
                ans[nodee][node]=ans[node][nodee];
                if(vis[node][nodee]==0){
                pq.push({ans[node][nodee],nodee});
                vis[node][nodee]=1;
                vis[nodee][node]=1;
                }
            }
        }
    }

}
*/

int main()
{
   lli n,m,q;
   cin>>n>>m>>q;
  // vector<vector<lli>> adj[n+1];
  vector<vector<lli>> ans( 505 , vector<lli> (505, 1000000000000));
   for(lli i=0;i<m;i++)
   {
       lli a,b,w;
       cin>>a>>b>>w;
       ans[a][b]=min(w,min(ans[a][b],ans[b][a]));
       ans[b][a]=min(w,min(ans[b][a],ans[a][b]));
   }
   for(lli i=1;i<=n;i++)
    ans[i][i]=0;
   //cout<<ans[1][2]<<" "<<ans[2][1]<<endl;
   //  for(lli i=1;i<=n;i++)
     // {
       //   djkstra(i,adj);
      // }
     //  for(lli i=1;i<=n;i++)
       //  for(lli j=1;j<=n;j++)
        // cout<<ans[i][j]<<" ";
        for(lli k=1;k<=n;k++)
        {
            for(lli i=1;i<=n;i++)
            {
                for(lli j=1;j<=n;j++)
                {
                    if(ans[i][j]>ans[i][k]+ans[k][j] && ans[i][k]!=1000000000000 && ans[k][j]!=1000000000000)
                    {
                        ans[i][j]=ans[i][k]+ans[k][j];
                    }
                }
            }
        }
      for(lli i=0;i<q;i++)
      {
          lli strt,endd;
          cin>>strt>>endd;
          if(ans[strt][endd]!=1000000000000)
            cout<<ans[strt][endd]<<endl;
          else
          cout<<"-1"<<endl;
      }
    return 0;

}
