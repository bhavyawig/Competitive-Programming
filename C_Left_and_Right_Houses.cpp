#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
       int n;
        string s;
        cin >> n >> s;
        s = " " + s;
        vector<int> pre(n + 1);
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i - 1] + s[i] - '0';
        }
        int ans = 1e9;
        for(int i = 0; i <= n; i++){
            int c0 = i - pre[i];
            int c1 = pre[n] - pre[i];
            if (c0 * 2 >= i && c1 * 2 >= n - i){
                if (abs(2 * i - n) < abs(2 * ans - n)){
                    ans = i;
                }
            }
        }
        cout << ans << '\n';
    }
}