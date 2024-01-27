#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        set<lli> s1,s2;
        for(int i=0;i<4;i++)
        {
            lli x,y;
            cin>>x>>y;
            s1.insert(x); s2.insert(y);
        }
    lli cnt=0,x1,x2,y1,y2;
    for(auto itr:s1)
    {
        if(cnt==0)
        {
            cnt++;
            x1=itr;
        }
        else
        x2=itr;
    }
    cnt=0;
    for(auto itr:s2)
    {
        if(cnt==0)
        {
            cnt++;
            y1=itr;
        }
        else
        y2=itr;
    }
    lli diff1=abs(x1-x2);
    lli diff2=abs(y1-y2);
    lli ans=(diff1*diff1)+(diff2*diff2);
    cout<<ans/2<<endl;
    }
}