#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a,b,x;
    cin>>a>>b>>x;
    lli left=x-a;
    if(x<a) cout<<"NO";
    else if(b>=left) cout<<"YES";
    else cout<<"NO";
}