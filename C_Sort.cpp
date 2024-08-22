#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int min_operations_to_match_substrings(const vector<vector<int>>& freq_a, const vector<vector<int>>& freq_b, int l, int r) {
    int changes = 0;
    
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        int count_a = freq_a[ch - 'a'][r + 1] - freq_a[ch - 'a'][l];
        int count_b = freq_b[ch - 'a'][r + 1] - freq_b[ch - 'a'][l];
        changes += abs(count_a - count_b);
    }
    
    return changes / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        string a, b;
        cin >> a >> b;
        
        vector<vector<int>> freq_a(26, vector<int>(n + 1, 0));
        vector<vector<int>> freq_b(26, vector<int>(n + 1, 0));
        
        for (int i = 0; i < n; ++i) {
            for (int ch = 0; ch < 26; ++ch) {
                freq_a[ch][i + 1] = freq_a[ch][i];
                freq_b[ch][i + 1] = freq_b[ch][i];
            }
            freq_a[a[i] - 'a'][i + 1]++;
            freq_b[b[i] - 'a'][i + 1]++;
        }
        
        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            l--; r--;  
            cout << min_operations_to_match_substrings(freq_a, freq_b, l, r) << "\n";
        }
    }
    
    return 0;
}
