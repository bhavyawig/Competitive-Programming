#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n;
        cin>>n;
        lli a[n];
        map<lli,lli> m,cnt;
        lli ans=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=n)
            {
                m[a[i]]++;
            }
        }
        for(lli i=1;i<=n;i++)
        {
            for(lli j=i;j<=n;j+=i)
            cnt[j]+=m[i];
        }
        for(auto itr: cnt)
        {
            ans=max(ans,itr.second);
        }
        cout<<ans<<endl;
    }
    return 0;

}