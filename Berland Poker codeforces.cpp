#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,m,k;
        cin>>n;   cin>>m;  cin>>k;
        lli j=n/k;
        if(k==0)
        {
            cout<<"0"<<endl;
        }
        else if(j>=m)
        {
            cout<<m<<endl;
        }
        else
        {
            lli ans=abs(j-(m/j));
            lli ans2=abs(m-(m/j));
            //cout<<ans<<endl;
            //cout<<ans2<<endl;
            cout<<max(ans,ans2)-1<<endl;
        }
    }
    return 0;
}
