#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli x,y,even=0,odd=0;
        cin>>x;   cin>>y;
        if(x<0)
        {
            x=-(x);
        }
        if(y<0)
        {
            y=-(y);
        }
        if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(y%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(even==2 || odd==2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

