#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;

    lli b[n-1];
    for(int i=0;i<n-1;i++)
    cin>>b[i];

    lli ans=0;
    ans+=b[0];

    for(int i=0;i<n-2;i++)
    {
        ans+=(min(b[i],b[i+1]));
    }
    ans+=b[n-2];
    cout<<ans;
}