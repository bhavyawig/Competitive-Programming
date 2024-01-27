#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double ans=a[0];
    for(int i=0;i<n-1;i++)
    {
        ans=(ans+a[i+1])/2.000;
    }
    cout<<setprecision(15)<<ans;
}