#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a,b;
   cin>>a>>b;
    lli x,y,z;
    cin>>x>>y>>z;
    lli cnt=0;
    if(a>=2*x)
    {
        a=a-(2*x);
    }
    else
    {
        cnt=cnt+((2*x)-a);
        a=0;
    }
    if(b>=3*z)
    {
        b=b-(3*z);
    }
    else
    {
        cnt=cnt+((3*z)-b);
        b=0;
               // cout<<cnt<<endl;
    }
    if(a>=y)
    {
        a=a-y;
    }
    else
    {
        cnt=cnt+(y-a);
        a=0;
    }
    if(b>=y)
    {
        b=b-y;
    }
    else
    {
        cnt=cnt+(y-b);
        b=0;
    }
    cout<<cnt;

    return 0;
}

