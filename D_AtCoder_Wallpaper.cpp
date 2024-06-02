#include <iostream>
using namespace std;

using ll = long long;

// Function to count the number of black cells in the range (0,0) to (x,y)
ll count_black_up_to(ll x, ll y) {
    if (x < 0 || y < 0) return 0;
    ll total_cells = (x + 1) * (y + 1);
    ll black_cells = total_cells / 2;
    if ((x + y) % 2 == 0) {
        black_cells += 1; // adjust for extra black cell in case of even (x + y)
    }
    return black_cells;
}

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate black cells in different regions using inclusion-exclusion principle
    ll total_black_cells = count_black_up_to(C-1, D-1) 
                         - count_black_up_to(A-1, D-1) 
                         - count_black_up_to(C-1, B-1) 
                         + count_black_up_to(A-1, B-1);

    // Output twice the number of black cells
    cout << 2 * total_black_cells << endl;

    return 0;
}
