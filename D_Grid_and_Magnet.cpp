#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void   dfs(vector<vector<char>> &grid,int i,int j,int h,int w,set<pair<int,int>> &s,int &sum,
vector<vector<int>> &vis)
{
    if(i<0 || j<0 || i>=h || j>=w || grid[i][j]=='#' || vis[i][j]==1)
    return;

    if(grid[i][j]=='1')
   { 
    s.insert({i,j});
    return;
   }

    sum++;
    vis[i][j]=1;
    dfs(grid,i+1,j,h,w,s,sum,vis);
     dfs(grid,i,j+1,h,w,s,sum,vis);
      dfs(grid,i,j-1,h,w,s,sum,vis);
       dfs(grid,i-1,j,h,w,s,sum,vis);
}
int main() {
    int h,w;
    cin>>h>>w;
    int ans=INT_MIN;
    vector<vector<char>> grid(h,vector<char> (w));
    for(int i=0;i<h;i++)
    {
        string uf; 
        cin>>uf;
        for(int j=0;j<w;j++)
        {
            grid[i][j]=uf[j];
            if(uf[j]=='.')
            ans=1;
        }
    }

      for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(grid[i][j]=='#')
            {
                if(i-1>=0 && grid[i-1][j]=='.')
                grid[i-1][j]='1';
                 if(j-1>=0 && grid[i][j-1]=='.')
                grid[i][j-1]='1';
                 if(i+1<h && grid[i+1][j]=='.')
                grid[i+1][j]='1';
                 if(j+1<w && grid[i][j+1]=='.')
                grid[i][j+1]='1';
            }
        }
    }
    set<pair<int,int>> s;
                    vector<vector<int>> vis(h,vector<int> (w,0));
       for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(grid[i][j]=='.' && vis[i][j]==0)
            {
                s.clear();
                int sum=0;
                dfs(grid,i,j,h,w,s,sum,vis);
                int len=sum+s.size();
                ans=max(ans,len);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


