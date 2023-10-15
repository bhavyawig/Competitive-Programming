#include<bits/stdc++.h>


using namespace std;

int main() {
    vector<vector<int>> grid(3, vector<int>(3));
    
    // Input the 3x3 grid
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> grid[i][j];
        }
    }

    int total_ways = 0; // Total ways to fill the grid without disappointment

    // Check for disappointment conditions
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int same_count = 0; // Count of squares with the same number as the current square

            // Check horizontal and vertical lines
            for (int k = 0; k < 3; ++k) {
                if (grid[i][j] == grid[i][k]) {
                    same_count++;
                }
                if (grid[i][j] == grid[k][j]) {
                    same_count++;
                }
            }

            // Check diagonal lines
            if (i == j || i + j == 2) {
                for (int k = 0; k < 3; ++k) {
                    if (grid[i][j] == grid[k][k]) {
                        same_count++;
                    }
                    if (grid[i][j] == grid[k][2 - k]) {
                        same_count++;
                    }
                }
            }

            // If the current square contributes to disappointment, subtract it from the total ways
            total_ways += same_count;
        }
    }

    // Total possible ways to fill the grid is 9! (9 factorial, as each square can have any of the 9 numbers)
    double total_possible_ways = 1;
    for (int i = 1; i <= 9; ++i) {
        total_possible_ways *= i;
    }

    // Probability of not getting disappointed
    double probability = 1.0 - static_cast<double>(total_ways) / total_possible_ways;

    cout << "Probability of not getting disappointed: " << probability << endl;

    return 0;
}
