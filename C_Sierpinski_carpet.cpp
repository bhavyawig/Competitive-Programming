#include <iostream>
#include <vector>
using namespace std;

vector<string> generateCarpet(int K) {
    if (K == 0) {
        return {"#"};
    }

    vector<string> smallerCarpet = generateCarpet(K-1);
    int smallerSize = smallerCarpet.size();
    int newSize = smallerSize * 3;
    
    vector<string> carpet(newSize, string(newSize, '.'));
    
    for (int i = 0; i < smallerSize; ++i) {
        for (int j = 0; j < smallerSize; ++j) {
            carpet[i][j] = smallerCarpet[i][j];
            carpet[i][j + smallerSize] = smallerCarpet[i][j];
            carpet[i][j + 2 * smallerSize] = smallerCarpet[i][j];
            carpet[i + smallerSize][j] = smallerCarpet[i][j];
            carpet[i + smallerSize][j + 2 * smallerSize] = smallerCarpet[i][j];
            carpet[i + 2 * smallerSize][j] = smallerCarpet[i][j];
            carpet[i + 2 * smallerSize][j + smallerSize] = smallerCarpet[i][j];
            carpet[i + 2 * smallerSize][j + 2 * smallerSize] = smallerCarpet[i][j];
        }
    }
    
    return carpet;
}

int main() {
    int N;
    cin >> N;
    

    vector<string> carpet = generateCarpet(N);
    
    for (const string &row : carpet) {
        cout << row << endl;
    }
    
    return 0;
}
