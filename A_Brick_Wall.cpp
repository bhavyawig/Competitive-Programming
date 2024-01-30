#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,m;
        cin>>n>>m;
        if(m%2!=0)
        m--;

        lli one=m/2;
        cout<<n*one<<endl;
    }   
}
