#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class BIT {
private:
    vector<int> tree;

public:
    BIT(int size) {
        tree.resize(size + 1, 0);
    }

    void update(int index, int value) {
        while (index < tree.size()) {
            tree[index] = max(tree[index], value);
            index += index & -index;
        }
    }

    int query(int index) {
        int maxVal = 0;
        while (index > 0) {
            maxVal = max(maxVal, tree[index]);
            index -= index & -index;
        }
        return maxVal;
    }
};

void solveTestCase() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    BIT bit(N);
    vector<int> LIS(N, 0);
    int maxLIS = 0;

    for (int i = 0; i < N; ++i) {
        LIS[i] = bit.query(A[i] - 1) + 1;
        bit.update(A[i], LIS[i]);
        maxLIS = max(maxLIS, LIS[i]);
    }

    for (int i = 0; i < N; ++i) {
        if (LIS[i] == maxLIS) {
            cout << i+1<<" ";
        }
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solveTestCase();
    }
    return 0;
}
