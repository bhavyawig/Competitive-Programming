#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    if(n<100) cout<<"No";
    else if(n%100==0) cout<<"Yes";
    else cout<<"No";
}
