#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
     lli a,b,c;
     cin>>a>>b>>c;
        lli diff=abs(a-b);
        double val=double(diff)/2;
       // cout<<val<<endl;
        double ans=ceil(val/c);
        cout<<ans<<endl;
    }
    return 0;
}