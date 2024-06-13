#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 void dfs(vector<vector<char>>& grid,vector<vector<lli>>& vis,vector<vector<lli>>& no, int i, int j,int n,int m, int size) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || vis[i][j] || grid[i][j] == '.')
        return;

    vis[i][j] = true;
    size++;

    dfs(grid,vis,no, i + 1, j, n,m, size);
    dfs(grid,vis,no, i - 1, j, n,m, size);
    dfs(grid,vis,no, i, j + 1, n,m, size);
    dfs(grid,vis,no, i, j - 1, n,m, size);

    no[i][j]=size;
}

int main() {
    lli testn;
    cin>>testn;
    for(lli e=0;e<testn;e++)
    {
        lli n,m;
        cin>>n>>m;
        vector<vector<char>> a(n, vector<char> (m));
        vector<vector<lli>> vis(n, vector<lli> (m,0));
        vector<vector<lli>> no(n, vector<lli> (m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
          for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0)
                {
                    dfs(a,vis,no,i,j,n,m,0);
                }
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               cout<<no[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


