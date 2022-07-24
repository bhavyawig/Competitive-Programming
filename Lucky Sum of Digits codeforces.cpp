#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    vector< pair <lli,lli> > v;
    lli mini=INT_MAX;
    lli storex=0,storey=0;
    for(lli i=0; i<1000000; i++)
    {
        lli x=i;
        lli y=(n-(7*x))/4;
        if(((7*x)+(4*y))==n && x>=0 && y>=0)
        {
            // cout<<x<<" "<<y<<endl;
            lli ans=x+y;//10
            if(mini>=ans)
            {
                if(ans==mini)
                {
                    if(storex>=x)
                    {
                        storex=x;
                        storey=y;
                    }

                }
                else
                {
                    storex=x;
                    storey=y;
                }
                mini=ans;

            }

        }
    }
    if(mini==INT_MAX)
        cout<<-1;
    else
    {
        for(lli i=0; i<storey; i++)
            cout<<4;
        for(lli i=0; i<storex; i++)
            cout<<7;
    }
    return 0;
}

