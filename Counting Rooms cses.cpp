#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
char a[1001][1001];
lli vis[1001][1001];

void dfs(lli i, lli j,lli n,lli m)
{
    vis[i][j]=1;
   if(i-1>=0 && a[i-1][j]=='.' && vis[i-1][j]==0)
        dfs(i-1,j,n,m);

   if(j-1>=0 && a[i][j-1]=='.' && vis[i][j-1]==0)
        dfs(i,j-1,n,m);

   if(i+1<n && a[i+1][j]=='.' && vis[i+1][j]==0)
        dfs(i+1,j,n,m);

   if(j+1<m && a[i][j+1]=='.' && vis[i][j+1]==0)
        dfs(i,j+1,n,m);
}

int main()
{
    for(int i=0;i<1001;i++)
{
    for(int j=0;j<1001;j++)
        vis[i][j]=0;
}
   lli n,m;
   lli cnt=0;
   cin>>n>>m;
   //vector<lli> a[n][m];
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
    for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           if(a[i][j]=='.' && vis[i][j]==0)
           {
               dfs(i,j,n,m);
               cnt++;
           }
       }
   }
   cout<<cnt<<endl;

    return 0;

}
