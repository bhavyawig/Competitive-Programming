#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c) cout<<"1";
    else if(a==b && a!=c) cout<<"2";
    else if(a==c && a!=b) cout<<"2";
    else if(b==c && b!=a) cout<<"2";
    else cout<<"3";
}