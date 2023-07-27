#include<bits/stdc++.h>
using namespace std;
// #define int long long int


int main()
{
    int n,m;
   cin>>n>>m;
   int mod=1e9+7;
   vector<vector<int>> adj[n+1];
   for(int i=0;i<m;i++)
   {
       int a,b,c;
       cin>>a>>b>>c;
      vector<int> temp;
      temp.push_back(b);
       temp.push_back(c);
       adj[a].push_back(temp);
     //  adj[b].push_back(a);
   }
   priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;
   pq.push({0,1});
   vector<int> dist(n+1,INT_MIN);
   vector<int> vis(n+1,0);
      vector<int> sec(n+1,0);
         vector<int> mini(n+1,INT_MAX);
            vector<int> maxi(n+1,INT_MIN);
   //vis[1]=1;
   dist[1]=0;
   while(pq.empty()==false)
   {
    int val=pq.top().first;
    int node=pq.top().second;
    pq.pop();
    for(auto itr: adj[node])
    {
        int circl=itr[0];
        int dist1=itr[1];
        if(dist[circl]==val+dist1)
        {
          sec[circl]+=sec[node]%mod;
           sec[circl]=sec[circl]%mod;
          mini[circl]=min(mini[circl],mini[node]+1);
            maxi[circl]=max(maxi[circl],maxi[node]+1);
        }
        if(dist[circl]>val+dist1)
        {
            dist[circl]=val+dist1;
              sec[circl]=sec[node]%mod;
              mini[circl]=mini[node];
              maxi[circl]=maxi[node];
        }
    }
   }
   cout<<dist[n]<<" "<<sec[n]<<" "<<mini[n]<<" "<<maxi[n]<<endl;
    return 0;
}

