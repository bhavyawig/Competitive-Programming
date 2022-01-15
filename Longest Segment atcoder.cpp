#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    double ans=INT_MIN;
    double dist;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             dist=sqrt(((a[j][0]-a[i][0])*(a[j][0]-a[i][0]))+(((a[j][1]-a[i][1])*(a[j][1]-a[i][1]))));
           // cout<<dist<<endl;
             ans=max(ans,dist);
        }
    }
    cout<<fixed<<setprecision(8)<<ans<<endl;

    return 0;
}

