#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
map<lli,lli> m;

lli dp(lli n)
{
    if(n<2) return 0;

    if(m.count(n)) return m[n];
    return m[n]=n+dp(n/2)+dp((n+1)/2);
}

int main()
{
   lli n;
   cin>>n;
   cout<<dp(n);
}
