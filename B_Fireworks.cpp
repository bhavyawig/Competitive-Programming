#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli a,b,c;
        cin>>a>>b>>c;
        cout<<(c/a)+(c/b)+2<<endl;
    }
}