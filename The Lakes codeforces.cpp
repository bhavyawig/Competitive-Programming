#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli vis[1002][1002];
lli a[1002][1002];
lli ans=0;
lli dfs(int i,int j,int n,int m)
{
    vis[i][j]=1;
    int ans=a[i][j];
    if(i-1>=0 && a[i-1][j]!=0 && vis[i-1][j]==0)
        ans+=dfs(i-1,j,n,m);

      if(i+1<n && a[i+1][j]!=0 && vis[i+1][j]==0)
        ans+=dfs(i+1,j,n,m);

    if(j-1>=0 && a[i][j-1]!=0  && vis[i][j-1]==0)
        ans+=dfs(i,j-1,n,m);

    if(j+1<m && a[i][j+1]!=0 && vis[i][j+1]==0)
        ans+=dfs(i,j+1,n,m);

    return ans;
}

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        int n,m;
        cin>>n>>m;
        ans=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
               vis[i][j]=0;
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(vis[i][j]==0 && a[i][j]!=0)
               {
                   ans=max(ans,dfs(i,j,n,m));
               }
           }
       }
       cout<<ans<<endl;
    }

    return 0;

}
