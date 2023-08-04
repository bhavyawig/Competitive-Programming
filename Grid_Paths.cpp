#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
    int mod=1e9+7;
    vector<vector<char>> a(n, vector<char> (n));
    vector<vector<int>> t(n, vector<int> (n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        char t1; cin>>t1;
        a[i][j]=t1;
      //  cout<<a[i][j];
        }
    }
    if(a[0][0]=='*') cout<<"0"<<endl;
    else{
   t[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!='*'){
            if(i-1>=0 )
            {
                t[i][j]+=(t[i-1][j]%mod);
                t[i][j]=t[i][j]%mod;
            }
            if(j-1>=0)
            {
                t[i][j]+=(t[i][j-1]%mod);
                t[i][j]=t[i][j]%mod;
            }
            }
        }
    }
    cout<<t[n-1][n-1]%mod<<endl;
    }
    return 0;
}