#include <iostream>
#include <cmath>

using namespace std;

int findOptimalX(int n) {
    int best_x = 2;
    long long max_sum = 0;

    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        long long sum = x * k * (k + 1) / 2;

        if (sum > max_sum) {
            max_sum = sum;
            best_x = x;
        }
    }

    return best_x;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << findOptimalX(n) << endl;
    }
    
    return 0;
}
