#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool cycle(vector<pair<int,int>> adj[],int node,int prt,vector<int>&vis,int &mini,
vector<int> &vec)
{
    vis[node]=1;
    vec.push_back(node);
    for(auto itr: adj[node])
    {
        mini=min(mini,itr.second);
        if(vis[itr.first]==0)
        {
            if(cycle(adj,itr.first,node,vis,mini,vec))
            {
                return true;
            }
        }
        else if(itr.first!=prt)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,m;
        cin>>n>>m;
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<m;i++)
        {
            lli u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<int> vis(n+1,0);
        vector<int> pos;
        int minival=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
            vector<int> vec;
            int mini=INT_MAX;
            if(cycle(adj,i,-1,vis,mini,vec))
            {
                //cout<<vec.size()<<endl;
                if(minival>mini)
                {
                    minival=mini;
                    pos.clear();
                    pos=vec;
                }
            }
            }
        }
        cout<<minival<<" "<<pos.size()<<endl;
        for(int i=0;i<pos.size();i++)
        cout<<pos[i]<<" ";
        cout<<endl;
    }
}