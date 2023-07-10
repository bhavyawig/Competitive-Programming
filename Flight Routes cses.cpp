#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m,k;
   cin>>n>>m>>k;
   vector<vector<lli>> adj(n+1,vector<lli>(n+1,1e18));
   priority_queue<lli, vector<lli>, greater<lli>> pq;
   for(lli i=0;i<m;i++)
   {
       lli a,b,c;
       cin>>a>>b>>c;
       adj[a][b]=c;
   }
   for(lli k=1;k<=n;k++)
   {
       // adj[1][n]=adj[1][k]+adj[k][n]

       if(adj[1][k]!=1e18 && adj[k][n]!=1e18)
       pq.push(adj[1][k]+adj[k][n]);
   }

   for(lli i=0;i<k;i++)
   {
      cout<<pq.top()<<" ";
      pq.pop();
   }

    return 0;

}
