#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

long long int countValidStrings(int length, int pos, vector<int>& C) {
    // Base case: if the length is 0, return 1 (empty string is valid)
    if (length == 0) return 1;
    if(length<0 ) return 0;

    long long int result = 0;

    for (int i = 0; i < 26; ++i) {
        if (C[i] > 0 ) {
            C[i]--;
            result = (result + countValidStrings(length - 1, i, C)) % MOD;
            C[i]++;
        }
    }

    return result;
}

int main() {
    int K;
    cin >> K;

    vector<int> C(26);
    for (int i = 0; i < 26; ++i) {
        cin >> C[i];
    }

    long long int totalStrings = 0;

    // Calculate total valid strings for each length from 1 to K
    for (int len = 1; len <= K; ++len) {
            // Call the recursive function for each starting letter
            totalStrings = (totalStrings + countValidStrings(len, 0, C)) % MOD;
        
    }

    cout << totalStrings << endl;

    return 0;
}
