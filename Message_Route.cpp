#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

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
   queue<lli> q;
   vector<lli> vis(n+1,0);
   vector<lli> prt(n+1);
   q.push(1);
   vis[1]=1;
   prt[1]=-1;
   while(q.empty()==false)
   {
    lli node=q.front();
    q.pop();
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
        {
            vis[itr]=1;
            prt[itr]=node;
            q.push(itr);
        }
    }
   }
    lli curr=n,no=0;
    vector<lli> vec;
    while(curr!=-1 && no==0)
    {
        vec.push_back(curr);
        curr=prt[curr];
        if(vec.size()>n+1) {
            no++; 
            break;
        }
    }
    if(no>=1) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        cout<<vec.size()<<endl;
        reverse(vec.begin(),vec.end());
        for(lli i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    }
   return 0;
}
