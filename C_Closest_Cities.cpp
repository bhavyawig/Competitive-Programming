#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli lastnode=-1;
void dfs(lli x,lli y, lli &cnt,vector<lli> adj[],lli node)
{
    lastnode=node;
    if(lastnode==y) return;
    for(auto itr: adj[node])
    {
        if(abs(itr-y)<abs(node-y))
        {
            dfs(x,y,cnt,adj,itr);
        }
        else
        return;
    }
    cnt++;
}

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n; cin>>n;
        vector<lli> a;
        for(lli i=0;i<n;i++)
        {
            lli o; cin>>o;
            a.push_back(o);
        }
        vector<lli> adj[n+1];
        adj[1].push_back(2);
        adj[n].push_back(n-1);
        for(int i=1;i<n-1;i++)
        {
            if(a[i]-a[i-1]<a[i+1]-a[i])
            {
                adj[i+1].push_back(i);
            }
            else
            adj[i+1].push_back(i+2);
        }
        lli m; cin>>m;
        for(lli i=0;i<m;i++)
        {
            lli x,y;
            cin>>x>>y;
            lastnode=x;
            lli cnt=0;
            dfs(x,y,cnt,adj,x);
            //cout<<cnt<<endl;
            if(lastnode==y) cout<<cnt<<endl;
            else
            {
                lli ans=cnt+abs(a[y-1]-a[lastnode-1]);
                cout<<ans<<endl;
            }
        }
    }
}