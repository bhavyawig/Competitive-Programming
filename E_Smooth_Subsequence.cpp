#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli dp(vector<lli> &a,lli i,lli prev,lli d,vector<vector<lli>> &t)
{
    if(i>=a.size())
    return 0;

    if(t[i][prev+1]!=-1)
    return t[i][prev+1];

    lli a1=1,b=0;
    // take
    if(prev==-1 || abs(a[prev]-a[i])<=d)
    a1=1+dp(a,i+1,i,d,t);

    b=dp(a,i+1,prev,d,t);

    return t[i][prev+1]=max(a1,b);
}
int main()
{
       lli n,d;
       cin>>n>>d;
       vector<lli> a(n);
       for(lli i=0;i<n;i++)
       cin>>a[i];

       vector<vector<lli>> t(n, vector<lli> (n,-1));
       lli ans=dp(a,0,-1,d,t);
       cout<<ans;
}
