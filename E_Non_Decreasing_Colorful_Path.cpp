#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int maxScore=0;
void dfs(int node, vector<int> adj[], vector<int> &val,int n,int cnt,vector<int> &vis,set<int>&s)
{
    vis[node]=1;
    s.insert(val[node]);
  // cout<<node<<" ";
    if(node==n)
    {
        cnt++;
        int len=s.size();
        maxScore=max(maxScore,len);
        cnt--;
    }

    for(auto itr: adj[node])
    {
        if(val[itr]>=val[node] && vis[itr]==0)
         dfs(itr,adj,val,n,cnt+1,vis,s);
    }
    vis[node]=0;
    s.erase(val[node]); 
}
int main()
{
    int N, M;
    cin >> N >> M;
     
     vector<int> values(N+1);
     vector<int> graph[N+1];
     vector<int> vis(N+1,0);
     set<int> s;
    for (int i = 1; i <= N; ++i) {
        cin >> values[i];
    }

    for (int i = 0; i < M; ++i) {
        int U, V;
        cin >> U >> V;
         if(values[U]==values[V])
         continue;
        // graph[U].push_back(V);
        // graph[V].push_back(U);}
        // else 
        else if(values[U]>values[V])
        {
            graph[U].push_back(V);
        }
        else
        graph[V].push_back(U);
    }
    queue<pair<int,int>> q;
    q.push({N,1});
    while(q.empty()==false)
    {
        int node=q.front().first;
        int val=q.front().second;
        q.pop();
        if(node==1)
        {
            maxScore=max(maxScore,val);
        }
        for(auto itr: graph[node])
        {
            q.push({itr,val+1});
        }
    }
    cout << maxScore << endl;

}