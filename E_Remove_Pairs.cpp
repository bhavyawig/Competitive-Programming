// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;



// int main() {
//     int N;
//     cin >> N;
    
//     vector<int> A(N), B(N);
//     vector<int> vis(N,0);
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i] >> B[i];
//     }

//     int pairs = 0;

//    for(int i=0;i<N;i++)
//    {
//       // front
//       int ok=0;
//       for(int j=i+1;j<N;j++)
//       {
//         if(vis[j]==0 && (A[i]==A[j] || B[i]==B[j]))
//         {
//             pairs++;
//             vis[j]=1;
//             vis[i]=1;
//             ok++;
//             break;
//         }
//       }
//    }

//     if (pairs % 2 == 0) {
//         cout << "Aoki" << endl;
//     } else {
//         cout << "Takahashi" << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool canWin(int state) {
    return (state & 1) == 0; // Checks if the least significant bit of state is 0
}

bool gameOutcome(const vector<pair<int, int>>& cards) {
    int N = cards.size();
    int initial_state = (1 << N) - 1; // Set all N bits to 1 initially

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int a = i, b = j;
            if (cards[a].first == cards[b].first || cards[a].second == cards[b].second) {
                int new_state = initial_state & ~(1 << a) & ~(1 << b); // Clear bits a and b
                if (!canWin(new_state)) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> cards(N);
    for (int i = 0; i < N; ++i) {
        cin >> cards[i].first >> cards[i].second;
    }

    string result = gameOutcome(cards) ? "True" : "False";
    cout << result << endl;

    return 0;
}
