#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli n1,ans=0;
void dfs(lli no,lli a,lli b,lli c)
{
    if(no>n1) return;
    if(a&&b&&c) ans++;

    dfs(no*10+3,1,b,c);
    dfs(no*10+5,a,1,c);
    dfs(no*10+7,a,b,1);
}
int main()
{
    cin>>n1;
    dfs(0,0,0,0);
    cout<<ans;
}