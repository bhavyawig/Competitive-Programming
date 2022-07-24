#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli h[n],m[n];
    for(lli i=0; i<n; i++)
    {
        cin>>h[i]>>m[i];
    }
    lli ans=INT_MIN,cnt=0;
    for(lli i=1; i<n; i++)
    {
        if(h[i]==h[i-1] && m[i-1]==m[i])
            cnt++;
        else
        {
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    ans=max(ans,cnt);
    if(ans==0)
        cout<<1<<endl;
    else
        cout<<ans+1<<endl;

    return 0;
}


