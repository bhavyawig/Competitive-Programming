#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    long long T;
    cin >> N >> T;
    string S;
    cin >> S;
    vector<long long> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    vector<pair<long long, char>> ants(N);
    for (int i = 0; i < N; ++i) {
        ants[i] = {X[i], S[i]};
    }

    // Sort ants by their initial positions
    sort(ants.begin(), ants.end());

    long long count = 0;
    vector<long long> rightAntsPositions; // Positions of ants moving to the right
    for (const auto& ant : ants) {
        long long position = ant.first;
        char direction = ant.second;

        if (direction == '0') { // Ant moving to the left
            // Use binary search to find the number of right-moving ants that will pass this left-moving ant
            count += rightAntsPositions.end() - lower_bound(rightAntsPositions.begin(), rightAntsPositions.end(), position);
        } else { // Ant moving to the right
            rightAntsPositions.push_back(position + 2 * T);
        }
    }

    cout << count << endl;

    return 0;
}
