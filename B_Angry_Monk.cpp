#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,k;
        cin>>n>>k;
        lli a[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        lli ans=0;
        for(int i=0;i<k-1;i++)
        {
            ans+=(a[i]-1);
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}


