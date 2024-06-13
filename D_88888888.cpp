#include <iostream>
#include <string>
using namespace std;

long long int mod_pow(long long int base, long long int exponent, long long int mod) {
    long long int result = 1;
    base %= mod; // Ensure base is within the modulus
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

int main() {
    const long long MOD = 998244353;
    long long int N;
    cin >> N;

    string s = to_string(N);
    int L = s.length();

    long long int power10L = mod_pow(10, L - 1, MOD);
    long long int power10LN = (mod_pow(10, N, MOD) - 1 + MOD) % MOD;
    power10LN = (power10LN * mod_pow(9, MOD - 2, MOD)) % MOD; // Modular inverse of 9

    long long int S = (N * power10L * power10LN) % MOD;

    // Ensure S is positive
    if (S < 0) {
        S = (S + MOD) % MOD;
    }

    cout << S << endl;

    return 0;
}
