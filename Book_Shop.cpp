#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n,w;
    cin>>n>>w;
    vector<int> weight(n);
    vector<int> val(n);
    for(int i=0;i<n;i++)
    {
        int h; cin>>h;
        weight[i]=h;
    }
    for(int i=0;i<n;i++)
    {
        int s; cin>>s;
        val[i]=s;
    }
    vector<vector<int>> t(n+1, vector<int> (w+1,0));
  //  memset(t,0,sizeof(t));
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<w+1;j++)
        {
           if(weight[i-1]<=j)
           {
            t[i][j]=max(t[i-1][j],val[i-1]+t[i-1][j-weight[i-1]]);
           }
           else
           {
            t[i][j]=t[i-1][j];
           }
        }
    }
    int ans=t[n][w];
    cout<<ans;
    return 0;
}