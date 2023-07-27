#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,d;
    cin>>n>>d;
    char a[n][d];
    vector<string> vec;
    for(lli i=0;i<n;i++)
    {
        string y;
        cin>>y;
        vec.push_back(y);
    }
    for(lli i=0;i<n;i++)
    {
        string temp=vec[i];
        for(lli j=0;j<d;j++)
        {
            a[i][j]=temp[j];
        }
    }
    lli ans=0,cnt=0,free=0,no=0;
      for(lli i=0;i<d;i++)
    {
        for(lli j=0;j<n;j++)
        {
            if(a[j][i]=='o') free++;
            else no++;
        }
        if(free==n)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
        cnt=0;
        free=0;
        no=0;
    }
    cout<<ans<<endl;
    return 0;

}
