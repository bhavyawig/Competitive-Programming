#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    char a[n][n];
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        string uf=s[i];
        for(int j=0;j<uf.length();j++)
        {
            a[i][j]=uf[j];
        }
    }
    lli row[n];
    for(int i=0;i<n;i++)
    {
        lli cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='o') cnt++;
        }
        row[i]=cnt;
    }
    lli col[n];
    for(int i=0;i<n;i++)
    {
        lli cnt1=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='o') cnt1++;
        }
        col[i]=cnt1;
    }
    lli ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='o')
            {
                ans+=(row[i]-1)*(col[j]-1);
                //row[i]--;
                //col[j]--;
            }
        }
    }
    cout<<ans;
}