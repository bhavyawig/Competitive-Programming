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
        for(lli i=0;i<n;i++)
        cin>>a[i];
        map<lli,lli> m;
        lli ans=0,f=0;
        for(lli i=0;i<n;i++)
        {
            m[a[i]]++;
            if(m[a[i]]%2==0)
            {
                f--;
            }
            else
            f++;
            ans=max(ans,f);
        }
        cout<<ans<<endl;
    }
    return 0;
}