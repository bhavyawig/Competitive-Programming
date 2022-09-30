#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    lli lower=max(l1,l2);
    lli higher=min(r1,r2);
    if(lower<=higher)
    {
        if(k>=lower && k<=higher)
            cout<<higher-lower;
            else
                cout<<higher-lower+1;
    }
    else
        cout<<0<<endl;



    return 0;
}


