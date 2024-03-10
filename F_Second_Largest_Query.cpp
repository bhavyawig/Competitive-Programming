#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Preprocess to find the second largest value and its count for each subrange
    vector<pair<int, int>> dp(N); // dp[i] stores {second_largest_value, count} for the subrange A[0, i]
    dp[0] = {A[0], 0};
    for (int i = 1; i < N; ++i) {
        if (A[i] > dp[i - 1].first) {
            dp[i] = {A[i], 1};
        } else if (A[i] == dp[i - 1].first) {
            dp[i] = {A[i], dp[i - 1].second + 1};
        } else {
            dp[i] = dp[i - 1];
        }
    }

    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int p, x;
            cin >> p >> x;
            A[p - 1] = x;
            // Update dp[] for the affected subrange
            if (p > 1) {
                dp[p - 1] = (A[p - 1] > dp[p - 2].first) ? make_pair(A[p - 1], 1) : make_pair(dp[p - 2].first, (A[p - 1] == dp[p - 2].first) ? dp[p - 2].second + 1 : dp[p - 2].second);
            } else {
                dp[p - 1] = {A[p - 1], 0};
            }
            for (int i = p; i < N; ++i) {
                if (A[i] > dp[i - 1].first) {
                    dp[i] = {A[i], 1};
                } else if (A[i] == dp[i - 1].first) {
                    dp[i] = {A[i], dp[i - 1].second + 1};
                } else {
                    dp[i] = dp[i - 1];
                }
            }
        } else if (type == 2) {
            int l, r;
            cin >> l >> r;
            --l; --r;
            // Output the count of occurrences of the second largest value within the subrange A[l, r]
            int second_largest = dp[r].first;
            int second_largest_count = dp[r].second - (l > 0 ? dp[l - 1].second : 0);
            if (l > 0 && A[l - 1] == second_largest) second_largest_count--;
            cout << second_largest_count << endl;
        }
    }

    return 0;
}
