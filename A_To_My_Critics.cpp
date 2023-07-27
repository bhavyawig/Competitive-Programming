#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli a[3];
        for(lli i=0;i<3;i++)
        cin>>a[i];
        sort(a,a+3);
        if(a[1]+a[2]>=10) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;

}
