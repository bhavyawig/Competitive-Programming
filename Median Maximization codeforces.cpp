#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,s;
        cin>>n;   cin>>s;
        cout<<s/(n/2+1)<<endl;
    }
    return 0;
}
