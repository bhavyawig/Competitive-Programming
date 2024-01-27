#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a,b;
    cin>>a>>b;
    cout<<max(a+b,max(a-b,a*b));
}