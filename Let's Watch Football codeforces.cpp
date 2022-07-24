#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a,b,c;
    cin>>a>>b>>c;
    if(b>=a)
        cout<<0;
    else
    {
        lli total=a*c;
        lli pos=b*c;
        lli bacha=total-pos;
        lli ans=bacha/b;
        if(bacha%b!=0)
            ans++;
        cout<<ans;
    }


    return 0;
}


