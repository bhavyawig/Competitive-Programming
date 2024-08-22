#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli ans=n/4;
        n=n-(4*ans);
        ans+=n/2;
        cout<<ans<<endl;
    }
    return 0;
}


