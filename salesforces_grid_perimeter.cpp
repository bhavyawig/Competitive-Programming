// given a grid of m*n grid of os and 1s only.
// you have to find the minimum area of the rectangle that will fit in all 1s
// it is given we only have a single island in a grid 

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int mini=INT_MAX,minj=INT_MAX;
int maxi=INT_MIN,maxj=INT_MIN;
void dfs(vector<vector<int>> &grid, int i,int j,int n,int m)
{
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)
    return;

    grid[i][j]=0;
    mini=min(mini,i);
    minj=min(minj,j);
    maxi=max(maxi,i);
    maxj=max(maxj,j);

    dfs(grid,i+1,j,n,m);
    dfs(grid,i,j+1,n,m);
    dfs(grid,i,j-1,n,m);
    dfs(grid,i-1,j,n,m);
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> grid(n,vector<int> (m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>grid[i][j];
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                dfs(grid,i,j,n,m);
                break;
            }
        }
    }

    int length=maxi-mini+1;
    int breadth=maxj-minj+1;
    cout<<length*breadth<<endl;

}