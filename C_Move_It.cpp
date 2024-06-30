#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

long long findMinCost(int N, vector<int>& A, vector<int>& W) {
    map<int, vector<int>> cycles;
    long long totalCost = 0;

    for (int i = 0; i < N; ++i) {
       cycles[A[i]].push_back(W[i]);
      // cout<<A[i]<<" "<<W[i]<<endl;
    }

    for (auto itr: cycles) {
            long long cycleSum = 0;
            int maxWeight = 0;
            for (int idx : itr.second) {
            //    cout<<idx<<endl;
                cycleSum += idx;
                maxWeight = max(maxWeight, idx);
            }
            totalCost += cycleSum - maxWeight;
    }

    return totalCost;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), W(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> W[i];

    cout << findMinCost(N, A, W) << endl;

    return 0;
}
