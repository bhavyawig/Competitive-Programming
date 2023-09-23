#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli h,w;
   cin>>h>>w;
   vector<string> s;
   vector<vector<char>> a(h,vector<char> (w));
   map<char,lli> m;
    vector<vector<int>> vis(h,vector<int> (w,0));
   for(int i=0;i<h;i++)
   {
    string e; cin>>e;
    s.push_back(e);
   }
    for(int i=0;i<h;i++)
   {
    string ans=s[i];
    for(int j=0;j<w;j++)
    {
        a[i][j]=ans[j];
    }
   }
   for(int i=0;i<h;i++)
   {
    for(int j=0;j<w;j++)
    {
        char temp=a[i][j];
        m[temp]++;
    }
    for(int j=0;j<w;j++)
    {
        char temp1=a[i][j];
       if(m[temp1]>=2)
       {
        vis[i][j]=1;
       }
    }
    m.clear();
   }
m.clear();
    for(int i=0;i<w;i++)
   {
    for(int j=0;j<h;j++)
    {
        char temp=a[j][i];
        m[temp]++;
    }
    for(int j=0;j<h;j++)
    {
        char temp1=a[j][i];
       if(m[temp1]>=2)
       {
        vis[j][i]=1;
       }
    }
    m.clear();
   }
   lli cnt=0;
    for(int i=0;i<h;i++)
   {
    for(int j=0;j<w;j++)
    {
        if(vis[i][j]==0) cnt++;
    }
   }
   cout<<cnt<<endl;

    return 0;
}