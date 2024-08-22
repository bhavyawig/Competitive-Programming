#include <iostream>
#include <string>
using namespace std;

string fn(string s, string t) {
    int m = s.size(), n = t.size();
    int j = 0; 
    
    for (int i = 0; i < m; ++i) {
        if (j < n && (s[i] == t[j] || s[i] == '?')) {
            if (s[i] == '?') {
                s[i] = t[j];
            }
            ++j;
        } else if (s[i] == '?') {
            s[i] = 'x'; 
        }
    }
    
    if (j < n) {
        return "NO";
    }
    else
    cout<<"YES"<<endl;
    
    return s;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s, t;
        cin >> s >> t;
        
        cout << fn(s, t) << endl;
    }
    
    return 0;
}
