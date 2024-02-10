#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli dp(lli n, vector<lli> &a,lli i,lli prev,lli sum)
{
    if(i>=a.size()) return sum;

    lli take=sum;
    // take
    if(prev==-1 || (abs(prev)%2==0 && abs(a[i])%2!=0) || (abs(prev)%2!=0 && abs(a[i])%2==0))
    take= dp(n,a,i+1,a[i],a[i]+sum);

    // not take
    lli nottake=dp(n,a,i+1,-1,sum);

    if(take==0 && nottake!=0)
    return nottake;
    else if(take!=0 && nottake==0)
    return take;
    else
    return max(take,nottake);
}

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n; cin>>n;
        vector<lli> a;
        for(lli i=0;i<n;i++)
        {
            lli h; cin>>h;
            a.push_back(h);
        }
        lli ans=dp(n,a,0,-1,0);
        cout<<ans<<endl;
    }   
}
