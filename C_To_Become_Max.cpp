#include<bits/stdc++.h>
using namespace std;

int max_possible_max(const vector<int>& a, int k, int lower, int upper) {
    int n = a.size();

    while (lower <= upper) {
        int mid = lower + (upper - lower) / 2;
        int operations = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] < mid) {
                operations += (mid - a[i]);
            }
        }

        if (operations <= k) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }

    return upper;
}

int main() {
     int t;
    cin>>t;
    for(int y=0;y<t;y++){
   int n,k;
   cin>>n>>k;
   vector<int> a;
   int maxi=INT_MIN,mini=INT_MAX;
   for(int i=0;i<n;i++)
   {
    int o; cin>>o;
    a.push_back(o);
    maxi=max(maxi,o);
    mini=min(mini,o);
   }
    int result = max_possible_max(a, k, mini,maxi);
    cout<< result << endl;
    }
    return 0;
}
