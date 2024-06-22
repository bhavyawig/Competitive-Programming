#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> B(M);
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    long long int totalCost=0;
    int i=0,j=0;
    while(i<N && j<M)
    {
        if(A[i]>=B[j])
        {
            totalCost+=A[i];
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    if (j>=M) {
        cout << totalCost << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
