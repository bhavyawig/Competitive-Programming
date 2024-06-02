#include <iostream>
using namespace std;

bool can(int A, int B, int N, const int plans[]) {
    int total = A + B;
    for (int i = 0; i < N; i++) {
        int daysLater = plans[i] % total;
        if (daysLater == 0 || daysLater > A) {
            return false; 
        }
    }
    return true;
}

int main() {
    int N,A,B;
    cin >>N>>A>>B;

    int plans[N];
    for (int i = 0; i < N; i++) {
        cin >> plans[i];
    }

    if (can(A, B, N, plans)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
