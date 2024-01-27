// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// int main() {
//     int H, W, K;
//     cin >> H >> W >> K;

//     vector<string> grid(H);
//     for (int i = 0; i < H; i++) {
//         cin >> grid[i];
//     }

//     int min_coins = INT_MAX;

//     // Check horizontally
//     for (int i = 0; i < H; i++) {
//         for (int j = 0; j <= W - K; j++) {
//             int cost = 0;
//             bool valid = true;

//             for (int l = 0; l < K; l++) {
//                 if (grid[i][j + l] == 'x') {
//                     valid = false;
//                     break;
//                 }
//                 if (grid[i][j + l] == '.') {
//                     cost++;
//                 }
//             }

//             if (valid) {
//                 min_coins = min(min_coins, cost);
//             }
//         }
//     }

//     // Check vertically
//     for (int j = 0; j < W; j++) {
//         for (int i = 0; i <= H - K; i++) {
//             int cost = 0;
//             bool valid = true;

//             for (int l = 0; l < K; l++) {
//                 if (grid[i + l][j] == 'x') {
//                     valid = false;
//                     break;
//                 }
//                 if (grid[i + l][j] == '.') {
//                     cost++;
//                 }
//             }

//             if (valid) {
//                 min_coins = min(min_coins, cost);
//             }
//         }
//     }

//     if (min_coins == INT_MAX) {
//         cout << "-1";
//     } else {
//         cout << min_coins << "\n";
//     }

//     return 0;
// }
