#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(2 * N);
    for (int i = 0; i < 2 * N; ++i) {
        cin >> A[i];
    }
    
    unordered_map<int, vector<int>> colorPositions;
    
    for (int i = 0; i < 2 * N; ++i) {
        colorPositions[A[i]].push_back(i);
    }
    
    int count = 0;
    
    for (int i = 1; i <= N; ++i) {
        if (colorPositions[i].size() == 2 && (colorPositions[i][1] - colorPositions[i][0] == 2)) {
            ++count;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
