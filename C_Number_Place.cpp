#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    vector<vector<int>> a(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }

    bool f = true;
    for (int i = 0; i < 9; i++) {
        set<int> st;
        for (auto &ele: a[i]) st.insert(ele);
        if ((int)st.size() != 9) f = false;
    }
    for (int j = 0; j < 9; j++) {
        set<int> st;
        for (int i = 0; i < 9; i++) {
            st.insert(a[i][j]);
        }
        if ((int) st.size() != 9) f = false;
    }

    set<int> st;
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            st.clear();
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    st.insert(a[i + x][j + y]);
                }
            }

            if ((int)st.size() != 9) f = false;
        }
    }

    cout << (f ? "Yes\n" : "No\n");
    return 0;

}