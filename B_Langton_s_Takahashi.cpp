#include <iostream>
#include <vector>

using namespace std;

void toroidal_paint(int H, int W, int N) {
    vector<vector<string>> grid(H, vector<string>(W, "white"));
    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};  
    int current_direction = 3;  
    pair<int, int> current_position = {0, 0};  

    for (int k = 0; k < N; ++k) {
        int i = current_position.first;
        int j = current_position.second;

        if (grid[i][j] == "white") {
            grid[i][j] = "black";
            current_direction = (current_direction + 1) % 4;  
        } else {
            grid[i][j] = "white";
            current_direction = (current_direction + 3) % 4;  
        }

        int dx = directions[current_direction].first;
        int dy = directions[current_direction].second;
        current_position = {((i + dx) % H + H) % H, ((j + dy) % W + W) % W};  
    }

    for (const auto &row : grid) {
        for (const auto &cell : row) {
            if(cell=="white")
            cout << ".";
            else
            cout<<"#";
        }
        cout << endl;
    }
}

int main() {
    int H, W, N;
    cin >> H;
    cin >> W;
    cin >> N;

    toroidal_paint(H, W, N);

    return 0;
}
