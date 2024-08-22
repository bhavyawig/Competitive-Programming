#include <iostream>
#include <algorithm>

using namespace std;

int count_triplets(int n, int x) {
    int count = 0;
    
    for (int a = 1; a < x - 1; ++a) {
        if ((2*a)+1> n) break;  
        
        for (int b = 1; b < x - a; ++b) {
            if (a * b + a + b > n) break;  

            int max_c = min((n-(a*b)) / (a + b), x - a - b);
            if (max_c > 0) {
                count += max_c;  
            }
        }
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        cout << count_triplets(n, x) << "\n";
    }
    
    return 0;
}
