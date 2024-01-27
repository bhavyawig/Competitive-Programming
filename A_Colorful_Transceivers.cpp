#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a,b,c,d;
    cin>>a>>b>>c>>d;
    if(abs(a-c)<=d) cout<<"Yes";
    else if(abs(a-b)<=d && abs(b-c)<=d) cout<<"Yes";
    else cout<<"No";
}