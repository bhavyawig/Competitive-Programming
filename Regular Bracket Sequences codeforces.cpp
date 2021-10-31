#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,p,w,g;
        cin>>n;
        for(lli i=1;i<=n;i++)
        {
            g=2*n;
            while(g>0)
            {
            p=i;
            w=i;
                while(p>0)
                {
                    cout<<"(";
                    p--;
                }
                while(w>0)
                {
                    cout<<")";
                    w--;
                }
                g=g-2;
            }
            cout<<endl;
        }
    }
    return 0;
}


