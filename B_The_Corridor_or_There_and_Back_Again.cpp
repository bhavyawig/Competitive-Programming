#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int e = 0; e < test; e++)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        int ans = 1e9;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i].second % 2 == 0)
                a[i].second = a[i].second - 1;
            ans = min(ans, a[i].first + a[i].second / 2);
        }
        cout << ans << endl;
    }
    return 0;
}