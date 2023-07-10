#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
  cin>>n>>m;
  vector<vector<lli>> adj[n+1];
  vector<lli> dist(n+1,INT_MAX);
  for(lli i=0;i<m;i++)
  {
      lli st,ed;
      cin>>st>>ed;
      adj[st].push_back(ed);
      adj[ed].push_back(st);
  }

  cout<<dist[n]<<endl;
    return 0;

}
