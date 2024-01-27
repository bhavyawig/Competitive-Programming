#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(vector<lli> adj[], vector<lli> &vec, lli node)
{
    //cout<<node<<" ";
    vec.push_back(node);
    for(auto itr: adj[node])
     dfs(adj,vec,itr);
}
int main()
{
    lli n;
    cin>>n;
    //cout<<n;
    vector<lli> adj[n+1];
    lli head=1;
    for(lli i=0;i<n;i++)
    {
        lli x; cin>>x;
        //cout<<i<<" ";
        if(x==-1)
        {
            head=i+1;
        }
        else
        {
            adj[x].push_back(i+1);
        }
    }
    //cout<<" fgd";
    vector<lli> vec;
    dfs(adj,vec,head);
    for(lli i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
}