#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli n;
    cin>>n;
    vector<pair<lli,lli>> adj[n+1];
    for(lli i=1;i<n;i++)
    {
        lli a,b,x;
        cin>>a>>b>>x;
        adj[i].push_back({i+1,a});
        adj[i].push_back({x,b});
    }
    priority_queue<pair<lli,lli> , vector<pair<lli,lli>> , greater<pair<lli,lli>>> pq;
        vector<lli> ans(n+1,1e20);
        ans[1]=0;
        pq.push({0,1});
        while(pq.empty()==false)
        {
            lli dist=pq.top().first;
            lli node=pq.top().second;
            pq.pop();
            for(auto itr: adj[node])
            {
                lli nodee=itr.first;
                lli vall=itr.second;
                if(ans[nodee]>dist+vall)
                {
                    ans[nodee]=dist+vall;
                    pq.push({ans[nodee],nodee});
                }
            }
        }
        cout<<ans[n];
}
