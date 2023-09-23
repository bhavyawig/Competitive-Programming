#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli go(lli a, lli b)
{
    if (b == 0)
        return a;
    return go(b, a % b);
}
lli lo(lli a, lli b)
{
    return (a/go(a, b))*b;
}
int main()
{
    lli test;
    cin >> test;
    while (test--)
    {
        lli n, x, y;
        cin >> n >> x >> y;
        lli uff = lo(x, y);
        /// lli uff=go(x,y);
         //lli yep=(x/uff)*y;
    lli a =(n/x)-(n/uff);
    lli b =(n/y)-(n/uff);
  //  cout<<a<<" "<<b<<endl;
        lli ans2 = (b*(b+1))/2;
        lli ans1 = (n * (n + 1)) / 2 - ((n - a) * (n - a + 1)) / 2;
        cout << ans1 - ans2 << endl;
    }
}