#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int length = N - K;
    int min_diff = INT_MAX;

    for (int i = 0; i <= N - length; ++i) {
        int current_diff = A[i + length - 1] - A[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }

    if(N==K || N==K+1 || K>N ) cout<<"0";
    else
    cout << min_diff << endl;

    return 0;
}
