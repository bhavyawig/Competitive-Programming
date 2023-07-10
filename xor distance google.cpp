#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countPairsWithDistanceK(vector<pair<int, int>>& A, int k) {
    int count = 0;
    unordered_map<int, int> freq;

    for (const auto& point : A) {
        int dist = (point.first * point.first) + (point.second * point.second);
        freq[dist]++;
    }

    for (const auto& point : A) {
        int dist = (point.first * point.first) + (point.second * point.second);
        int complement = k - dist;

        if (freq.find(complement) != freq.end()) {
            count += freq[complement];
        }

        if (complement == dist) {
            count--; // Exclude the pair itself when complement == dist
        }
    }

    return count;
}

int main() {
    vector<pair<int, int>> A = {{0, 0}, {0, 1}, {0, 0}, {1, 0}};
    int k = 1;

    int result = countPairsWithDistanceK(A, k);
    cout << "Number of pairs with distance " << k << ": " << result << endl;

    return 0;
}

// 1 2 3 4 5
// 1 3 6 10 15


