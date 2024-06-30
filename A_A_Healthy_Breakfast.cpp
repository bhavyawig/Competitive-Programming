#include <iostream>
#include <string>
using namespace std;

bool isRiceToLeftOfMisoSoup(const string& S) {
    size_t posR = S.find('R');
    size_t posM = S.find('M');
    
    return posR < posM;
}

int main() {
    string S;
    cin >> S;

    if (isRiceToLeftOfMisoSoup(S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
