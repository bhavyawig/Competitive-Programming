#include <iostream>
#include <vector>
#include<bits/stdc++.h>

#include <algorithm>

using namespace std;
typedef long long int lli;

int main() {
    lli t;
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;
        vector<lli> arr(n);
        map<int,int> m;
        for (lli i = 0; i < n; ++i) {
            cin >> arr[i];
            m[arr[i]]++;
        }

        if(n%2!=0 ) n++;
        n=n/2;
        lli no=0;
        for(auto itr:m)
        {
            if(itr.second>=n)
            {
                no++;
            }
        }

        // Output result
        if (no==0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
