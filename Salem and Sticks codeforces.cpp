#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    lli t=0,ans=INT_MAX;
    lli store=INT_MAX,cost=0,q=0;
    for(lli i=1; i<=100; i++)
    {
        t=i;
        cost=0;
        //cout<<t<<endl;
        for(lli j=0; j<n; j++)
        {
            // cout<<t<<endl;
            if(a[j]==t || abs(a[j]-t)==1)
                q++;
            else
            {
                if(a[j]>t)
                    cost=cost+abs(a[j]-t-1);
                else
                    cost=cost+abs(a[j]-t+1);
            }
        }
        //if(t==1 || t==2 || t==3)
        // cout<<cost<<endl;
        if(ans>cost)
        {
            store=i;
            ans=cost;
        }
    }
    cout<<store<<" "<<ans<<endl;
    return 0;
}

