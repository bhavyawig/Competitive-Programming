#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int solve(int n,vector<int> &dp)
{
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    int a=INT_MAX,b=INT_MAX,c=INT_MAX;
      c= solve(n-1,dp);
    if(n%2==0)
    {
        b=solve(n/2,dp);
    }
    if(n%3==0)
    {
        a=solve(n/3,dp);
    }
    return dp[n]=1+min(a,min(b,c));
}

int main()
{
    lli t;
    cin>>t;
    lli f=t;
    while(t--)
    {
        lli n;
        cin>>n;
        int ans=0;
        vector<int> dp(n+1,-1);
         ans=solve(n,dp);
        cout<<"Case "<<f-t<<": "<<ans<<endl;
    }
    return 0;
}