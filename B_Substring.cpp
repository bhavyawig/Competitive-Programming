#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int countSubstrings(const string& S) {
    unordered_set<string> substrings;
    int n = S.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            substrings.insert(S.substr(i, j - i));
        }
    }
    return substrings.size();
}

int main() {
    string S ;
    cin>>S;
    int result = countSubstrings(S);
    cout << result << endl;  

    return 0;
}
