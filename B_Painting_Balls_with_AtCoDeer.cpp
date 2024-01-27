#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli in=pow(k-1,n-1);
    cout<<k*in<<endl;
}