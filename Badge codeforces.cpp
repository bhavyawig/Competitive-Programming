#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

map<lli,vector<lli>> adj;
bool vis[100001]={0};
lli trykro(lli dd)
{
    for(lli i=0;i<100001;i++)
        vis[i]=0;
    queue<lli> q;
    q.push(dd);
    vis[dd]=1;
    lli ans,sabseupar;
    while(!q.empty())
    {
        sabseupar=q.front();
        q.pop();
        for(lli i=0;i<adj[sabseupar].size();i++)
        {
            ans=adj[sabseupar][i];
            if(vis[ans]==0)
            {
                vis[ans]=1;
                q.push(ans);
            }
        }
    }
    return ans;
}

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       adj[i+1].push_back(a[i]);
   }
   //cout<<trykro(3)<<endl;
   for(lli i=1;i<=n;i++){
    cout<<trykro(i);
   cout<<" ";

   }

    return 0;
}

