// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// bool can_cross_river(int n, int m, int k, const string& river) {
//     vector<int> visited(n + 2, 0);
//     queue<pair<int, int>> q; // (position, distance swum)

//     q.push({0, 0}); // Start from the left bank
//     visited[0] = 1;

//     while (!q.empty()) {
//         int position = q.front().first;
//         int swum = q.front().second;
//         q.pop();

//         // If we've reached the right bank
//         if (position == n + 1) {
//             return true;
//         }

//         // Try to jump from the current position
//         if(position==0 || river[position]=='L'){
//         for (int jump = 1; jump <= m; ++jump) {
//             int newPos = position + jump;
//             if (newPos > n + 1) {
//                 break;
//             }
//             if (newPos == n + 1 || river[newPos - 1] == 'L') {
//                 if (!visited[newPos]) {
//                     visited[newPos] = 1;
//                     q.push({newPos, swum});
//                 }
//             } else if (river[newPos - 1] == 'W') {
//                 if (!visited[newPos]) {
//                     visited[newPos] = 1;
//                     q.push({newPos, swum + 1});
//                 }
//             } 
//         }
//         }

//        // Try to swim to the next position
//         if (position > 0 && position <n && river[position] == 'W' && swum + 1 <= k  && position+1<n && river[position+1]=='W') {
//             if (!visited[position + 1]) {
//                 visited[position + 1] = 1;
//                 q.push({position + 1, swum + 1});
//             }
//         }
//         if(position > 0 && position <n && river[position] == 'W' && position+1==n)
//         {
//             if (!visited[position + 1]) {
//                 visited[position + 1] = 1;
//                 q.push({position + 1, swum + 1});
//             }
//         }
//     }

//     return false;
// }

// void solve() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;
//         string river;
//         cin >> river;

//         if (can_cross_river(n, m, k, river)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();
//     return 0;
// }
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() 
{
    int t;
    cin >> t;
    while(t--){
      
      int cas, i, f;
      cin >> cas >> i >> f;
      string m;
      cin >> m;
      int curr = i - 1, waste = 0, failed = 0;
      for(auto uf = 0; uf < m.size(); uf++){
        char action = m[uf];
        if(action == 'L'){
          curr = i;
        }
        else if(action == 'W'){
          if(curr <= 0) waste++;
        }
        else{
          if(curr <= 0) failed++;
        }
        curr--;
      }
      
      if(waste > f) failed++;
      
      cout << (failed!= 0? "NO" : "YES") << endl;
      
    }
    return 0;
}