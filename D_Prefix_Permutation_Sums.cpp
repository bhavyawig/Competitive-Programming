#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++) {
   int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 1; i < n; i++) {
      cin >> a[i];
    }
    vector<long long> extra;
    vector<int> used(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
      long long num = a[i + 1] - a[i];
      if (1 <= num && num <= n && !used[num]) {
        used[num] = 1;
      } else {
        extra.push_back(num);
      }
    }
    if (extra.empty()) {
      cout << "YES" << endl;
      continue;
    }
    if (extra.size() > 1) {
      cout << "NO" << endl;
      continue;
    }
    vector<int> left;
    for (int i = 1; i <= n; i++) {
      if (!used[i]) {
        left.push_back(i);
      }
    }
    if (left.size() == 2 && extra[0] == left[0] + left[1]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    }
     return 0;
}