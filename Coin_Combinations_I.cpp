#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n,x;
    cin>>n>>x;
    int mod=1e9+7;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        int o; cin>>o;
        a[i]=o;
    }
    vector<vector<int>> t(n+1, vector<int> (x+1,0));
    for(int i=0;i<n+1;i++)
    t[i][0]=1;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<x+1;j++)
        {
            if(a[i-1]<=j)
            {
                t[i][j]=t[i-1][j]+t[i][j-a[i-1]]%mod;
            }
            else
            t[i][j]=t[i-1][j]%mod;
        }
    }

    cout<<t[n][x]<<endl;
    return 0;
}