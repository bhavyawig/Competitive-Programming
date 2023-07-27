#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,p,q;
    cin>>n>>p>>q;
    lli mini=INT_MAX;
    for(lli i=0;i<n;i++)
    {
        lli a;
        cin>>a;
        mini=min(mini,a);
    }
    cout<<min(p,q+mini)<<endl;
    return 0;
}