#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)


signed main()   
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        ll a, b;
        cin >> a >> b;

        if (b <= 3)
            cout << -1 << "\n";

        else if (a == b)
        {
            if (a % 2 == 0)
                cout << 2 << " " << a - 2 << "\n";
            else
            {
                int i = 2;
                int p = -1;
                for (i = 2; i * i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        p = i;
                        break;
                    }
                }
                if (p == -1 || a - p == 0)
                    cout << -1 << "\n";
                else
                    cout << p << " " << a - p << "\n";
            }
        }

        else
            cout << 2 << " " << b - (b & 1) - 2 << "\n";
    }
    return 0;
}