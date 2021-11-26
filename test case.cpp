
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num == 1) return false;
    else if (num % 2 == 0 && num!=2) return false;
    else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) return false;
        }
    }
    return true;
}

int counterExample(int n) {
    for (int m = 1; m <= 1000; m++) {
        int exp = (n*m) + 1;
        if (!isPrime(exp)) {
            return m;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int ans = counterExample(n);
    cout << ans << '\n';
}
