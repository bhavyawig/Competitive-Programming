#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,s,k;
    cin>>n>>s>>k;
    lli ans=0;
    for(int i=0;i<n;i++)
    {
        lli p,q;
        cin>>p>>q;
        ans+=p*q;
    }
    if(ans<s)
    {
        ans+=k;
    }
    cout<<ans<<endl;
}