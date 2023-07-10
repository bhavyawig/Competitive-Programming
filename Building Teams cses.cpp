#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool ans=1;
bool bfs(vector<lli> adj[], vector<lli> &col, lli node)
{
    col[node]=1;
    queue<lli> q;
    q.push(node);
    while(q.empty()==false)
    {
        lli temp=q.front();
        q.pop();
        for(auto itr:adj[temp])
        {
            if(col[itr]==-1)
            {
                if(col[temp]==1) col[itr]=2;
                else col[itr]=1;
                q.push(itr);
            }
            else if(col[itr]==col[temp])
            {
                ans=0;
                return false;
            }
        }
    }
    return true;
}

int main()
{
   lli n,m;
   cin>>n>>m;
   vector<lli> adj[n+1];
   for(lli i=0;i<m;i++)
   {
       lli a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   vector<lli> col(n+1,-1);
   vector<lli> vis(n+1,0);
  // col[1]=1;
   lli no=0;
   for(lli i=1;i<=n;i++)
   {
       if(col[i]==-1)
        bfs(adj,col,i);
   }
   if(ans==0)cout<<"IMPOSSIBLE"<<endl;
   else
   {
       for(int i=1;i<=n;i++)
        cout<<col[i]<<" ";
   }

    return 0;

}
