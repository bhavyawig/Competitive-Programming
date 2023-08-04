#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        int o; cin>>o;
        a[i]=o;
    }
    vector<vector<int>> t(n+1, vector<int> (x+1,0));
    for(int i=1;i<x+1;i++)
    t[0][i]=INT_MAX-1;
    for(int i=1;i<x+1;i++)
    {
        if(i%a[0]==0)
        t[1][i]=i/a[0];
        else
        t[1][i]=INT_MAX-1;
    }
    for(int i=2;i<n+1;i++)
    {
        for(int j=1;j<x+1;j++)
        {
            if(a[i-1]<=j)
            {
                t[i][j]=min(t[i-1][j], 1+t[i][j-a[i-1]]);
            }
            else
            t[i][j]=t[i-1][j];
        }
    }
    if(t[n][x]>=INT_MAX-1)
    cout<<"-1"<<endl;
    else
    cout<<t[n][x]<<endl;
    return 0;
}