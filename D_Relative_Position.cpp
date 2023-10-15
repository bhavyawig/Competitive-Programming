#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool customComparator(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) {
        return a[1] < b[1];
    }
    return a[0] < b[0];
}
int main()
{
     lli n,m;
     cin>>n>>m;
     vector<vector<int>> vec(m, vector<int> (4));
     for(int i=0;i<m;i++)
     {
        lli a,b,x,y;
        cin>>a>>b>>x>>y;
       vec[i][0]=a;
       vec[i][1]=b;
       vec[i][2]=x;
       vec[i][3]=y;
     }
     sort(vec.begin(),vec.end(),customComparator);
     map<int,pair<int,int>> m;
     m[1]={0,0};
     for(int i=0;i<m;i++)
     {
        if(m.find(vec[i][0])!=m.end())
        {
            pair<int,int> 
        }
     }
    return 0;
}