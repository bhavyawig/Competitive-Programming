#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
char a[201][201];
bool lef=true, righ=true, u=true, dow=true;
lli cnt=0,ok=0;
void dfs(lli i, lli j, vector<vector<lli>> &vis,lli n,lli m)
{
    vis[i][j]=1;
    cnt++;
    // left
    if(lef==true && j-1>=0 && vis[i][j-1]==0 && a[i][j-1]=='.'){ 
    righ=false; u=false; dow=false; lef=true;
    ok++;
     //cout<<i<<" "<<j<<endl;
     dfs(i,j-1,vis,n,m);
    }
    else
    {
        righ=true; u=true; dow=true; lef=false;ok=0;
    }
    // right 
    if(righ==true && j+1<m && vis[i][j+1]==0 && a[i][j+1]=='.'){
    righ=true; u=false; dow=false; lef=false;
    ok++;
    dfs(i,j+1,vis,n,m);
    }
    else
    {
        righ=false; u=true; dow=true; lef=true;ok=0;
    }
    // up
    if(u==true && i-1>=0 && vis[i-1][j]==0 && a[i-1][j]=='.'){
    righ=false; u=true; dow=false; lef=false;
    ok++;
     dfs(i-1,j,vis,n,m);
    }
    else
    {
        righ=true; u=false; dow=true; lef=true;ok=0;
    }
    // down 
    if(dow==true && i+1<n && vis[i+1][j]==0 && a[i+1][j]=='.'){
    righ=false; u=false; dow=true; lef=false;
    ok++;
            if(i==2 && j==4) cout<<"left";
     dfs(i+1,j,vis,n,m);
    }
    else
    {
        righ=true; u=true; dow=false; lef=true;ok=0;
    }
     // left
    if(lef==true && j-1>=0 && vis[i][j-1]==0 && a[i][j-1]=='.'){ 
    righ=false; u=false; dow=false; lef=true;
    ok++;
      //  cout<<i<<" "<<j<<endl;
     dfs(i,j-1,vis,n,m);
    // cout<<"left";
    }
    else
    {
        righ=true; u=true; dow=true; lef=false;ok=0;
    }
    // right 
    if(righ==true && j+1<m && vis[i][j+1]==0 && a[i][j+1]=='.'){
    righ=true; u=false; dow=false; lef=false;
    ok++;
    dfs(i,j+1,vis,n,m);
    }
    else
    {
        righ=false; u=true; dow=true; lef=true;ok=0;
    }
    if(ok==0) return;
}

int main()
{
    lli n,m;
    cin>>n>>m;
    vector<string> vec;
   // cout<<n<<m;
    for(lli i=0;i<n;i++)
    {
        string y;
        cin>>y;
        vec.push_back(y);
    }
   // for(lli i=1;i<n+1;i++)
  //  cout<<vec[i]<<endl;
    for(lli i=0;i<n;i++)
    {
        string temp=vec[i];
        for(lli j=0;j<m;j++)
        {
            a[i][j]=temp[j];
        }
    }
    vector<vector<lli>> vis(n,vector<lli> (m,0));
    dfs(1,1,vis,n,m);
    cout<<cnt<<endl;
    return 0;

}
