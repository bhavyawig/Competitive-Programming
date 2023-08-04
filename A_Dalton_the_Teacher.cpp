#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli i=0;i<test;i++)
    {
        lli n;
        cin>>n;
       lli cnt=0;
       lli ans=0;
       for(lli i=1;i<=10000;i++)
       {
        if(n%i==0)
        cnt++;
        else
        cnt=0;
        ans=max(ans,cnt);
       }
       cout<<ans<<endl;
    }
    return 0;
}