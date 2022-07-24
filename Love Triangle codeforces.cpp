#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int cnt=0;
  int x=0;
vector<pair<int,int>> desi;
int store=INT_MAX;
int dfs(vector<int> adj[],vector<int> &vis, int parent, int node)
{
    vis[node]=1;
    desi.push_back(make_pair(node,cnt));
    for(auto itr: adj[node])
    {
        if(vis[itr]==0)
        {
            vis[itr]=1;
            cnt++;
            dfs(adj,vis,node,itr);
        }
        else if(itr!=parent)
        {
            store=itr;
            x++;
        }
    }
    return x;
}

int main()
{
    lli n;
    cin>>n;
    lli a;
    vector<int> adj[n+1];
    vector<int> vis(n+1,0);
    for(lli i=1; i<=n; i++)
    {
        cin>>a;
        adj[i].push_back(a);
    }
    int ans;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
            ans=dfs(adj,vis,-1,i);
        if(ans>0)
                x++;
    }
    if(x==0)
        cout<<"NO"<<endl;
    else
    {

        int nope=desi.size();
       cout<<nope<<endl;
       //cout<<store<<endl;
       int lets=0;
       for(int i=0;i<nope;i++)
       {
           if(desi[i].first==store)
            lets=i;
       }
        int side=desi[nope-1].second-desi[lets].second+1;
        //cout<<desi[0].second<<endl;
       // cout<<side<<endl;
        if(side==3)
            cout<<"YES";
        else
            cout<<"NO";
    }


    return 0;
}


