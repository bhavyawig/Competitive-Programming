#include <iostream>
#include <vector>
using namespace std;

int fn(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;

    vector<vector<int>> rounds = {
        {a1, b1, a2, b2},
        {a1, b2, a2, b1},
        {a2, b1, a1, b2},
        {a2, b2, a1, b1}
    };

    for (const auto& r : rounds) {
        int suneet_score = 0;
        int slavic_score = 0;

        if (r[0] > r[1]) {
            suneet_score += 1;
        } else if (r[0] < r[1]) {
            slavic_score += 1;
        }

        if (r[2] > r[3]) {
            suneet_score += 1;
        } else if (r[2] < r[3]) {
            slavic_score += 1;
        }

        if (suneet_score > slavic_score) {
            suneet_wins += 1;
        }
    }

    return suneet_wins;
}

int main() {
    int t;
    cin >> t;

    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        results.push_back(fn(a1, a2, b1, b2));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
