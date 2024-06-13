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
        lli a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        int ans=0;
        if(a[0]==0) ans++;
        lli sum=a[0];
        lli m=a[0];
        for(int i=1;i<n;i++)
        {
            m=max(m,a[i]);
            // if(a[i]==0)
            // {
            //     ans++;
            // }
            sum+=a[i];
            if(sum-m==m)
           { ans++;
          // cout<<sum<<" "<<i<<" "<<m<<endl;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}


