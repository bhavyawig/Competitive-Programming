#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    for(lli e=0;e<n;e++)
    {
        cin>>a[e];
    }
    lli ans=0;
    for(lli j=31;j>=0;j--){
        lli one=0,zero=0;
    for(lli i=0;i<n;i++)
    {
        lli no=a[i];
        int k=no>>j;
        if(k&1) one++;
        else zero++;
    }
    ans+=min(one,zero);
    }
    cout<<ans<<endl;
}