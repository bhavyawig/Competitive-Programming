#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; // Number of islands
    cin >> N;

    vector<int> X(N); // Tour sequence
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    // Calculate the initial tour length
    int initialTourLength = 0;
    for (int i = 0; i < N; ++i) {
        initialTourLength += min(abs(X[(i + 1) % N] - X[i]), abs(X[i] - X[(i + 1) % N]));
    }

    // Try closing each bridge and calculate the tour length
    int minTourLength = initialTourLength;
    for (int i = 1; i < N - 1; ++i) {
        int closedBridgeTourLength = initialTourLength;

        // Calculate the impact of closing the i-th bridge
        int contribution = min(abs(X[i] - X[i - 1]), abs(X[i + 1] - X[i])) +
                          min(abs(X[i] - X[i + 1]), abs(X[i] - X[i - 1]));

        // Update the tour length
        closedBridgeTourLength -= contribution;

        // Update the minimum tour length
        minTourLength = min(minTourLength, closedBridgeTourLength);
    }

    cout << minTourLength << endl;

    return 0;
}
