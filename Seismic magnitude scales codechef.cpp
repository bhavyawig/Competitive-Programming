#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a,b;
    cin>>a;    cin>>b;
    lli diff=a-b;
    lli count=1;
    for(lli i=0;i<diff;i++)
    {
        count=count*32;
    }
    cout<<count<<endl;
    return 0;
}

