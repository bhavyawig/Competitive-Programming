#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli a,b,r;
        cin>>a>>b>>r;
        lli x=a|b;
        if(x>r)
        x=r;
        lli ans=abs((a^x)-(b^x));
        if(x==r)
       { x=0;
        ans=max(ans,abs((a^x)-(b^x)));}
        cout<<ans<<endl;
    }   
}
