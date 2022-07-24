#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0; e<test; e++)
    {
        lli l,r;
        cin>>l>>r;
        lli no=r-l+1;
        lli ans=0;
        if(l==r)
        {
            if(l%2==0)
                cout<<l<<endl;
            else
            {
                l=-l;
                cout<<l<<endl;
            }
        }
        else
        {
            if(no%2==0)
            {
                if(l%2!=0)
                    cout<<no/2<<endl;
                else
                    cout<<"-"<<no/2<<endl;
            }
            else
            {
                if(l%2!=0)
                    ans=no/2;
                else
                    {
                        ans=no/2;
                        ans=-ans;
                    }
                if(r%2==0)
                    ans+=r;
                else
                    ans-=r;
                cout<<ans<<endl;

            }

        }
    }

    return 0;
}

