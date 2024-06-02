// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;
//      bool res=false;

// bool dfs(vector<vector<char>> &v,lli i,lli j, lli h, lli w,  set<pair<pair<lli, lli>, lli>> &s,
// lli energy,
// vector<vector<lli>> &memo)
// {
//     if(i<0 || j<0 || i>=h || j>=w || v[i][j]=='#' )
//     {
//         return false;
//     }
//     if(v[i][j]=='T')
//     return true;

//     if(memo[i][j]!=-1)
//     return memo[i][j];

//      auto it = s.lower_bound({{i, j},0}); 
//     if (it != s.end() && it->first == make_pair(i, j)) 
//     {
//         if(it->second>energy)
//         {
//         energy=it->second;
//         s.erase(it);
//         }  
//     }
//     if(energy>=1)
//     {
//          res = dfs(v, i - 1, j, h, w, s, energy - 1, memo) || dfs(v, i + 1, j, h, w, s, energy - 1, memo) ||
//                dfs(v, i, j - 1, h, w, s, energy - 1, memo) || dfs(v, i, j + 1, h, w, s, energy - 1, memo);
//     }
   
//    return memo[i][j]=res;
// }
// int main()
// {
//     lli h,w;
//     cin>>h>>w;
//     lli si=0,sj=0;
//     vector<vector<char>> v(h, vector<char> (w));

//     for(lli i=0;i<h;i++)
//     {
//         for(lli j=0;j<w;j++)
//         {
//             char dd; cin>>dd;
//             v[i][j]=dd;
//             if(dd=='S')
//             {
//                 si=i;sj=j;
//             }
//         }
//     }

//     lli n;
//     cin>>n;
//     set<pair<pair<lli, lli>, lli>> s;
//     for(lli i=0;i<n;i++)
//     {
//         lli fir,sec,value;
//         cin>>fir>>sec>>value;
//         fir--; sec--;
//         s.insert({{fir, sec}, value});
//     }
//     vector<vector<lli>> memo( h, vector<lli> (w,-1));
//     lli energy=0;
//     bool ans=dfs(v,si,sj,h,w,s,energy,memo);
//     if(ans==true) cout<<"Yes";
//     else
//     cout<<"No";
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

bool dfs(vector<vector<char>>& v, lli i, lli j, lli h, lli w, set<pair<pair<lli, lli>, lli>>& s,
         lli energy, vector<vector<bool>>& visited, vector<vector<vector<bool>>>& memo) {
    if (i < 0 || j < 0 || i >= h || j >= w || v[i][j] == '#' ) {
        return false;
    }

    if (v[i][j] == 'T') {
        return true;
    }

    if (memo[i][j][energy]) {
        return false;  // Already visited this cell with the same energy
    }

    visited[i][j] = true;

    auto it = s.lower_bound({{i, j}, 0});
    if (it != s.end() && it->first == make_pair(i, j)) {
        if (it->second > energy) {
            energy = it->second;
            s.erase(it);
        }
    }

    if (energy >= 1) {
        bool res = dfs(v, i - 1, j, h, w, s, energy - 1, visited, memo) ||
                   dfs(v, i + 1, j, h, w, s, energy - 1, visited, memo) ||
                   dfs(v, i, j - 1, h, w, s, energy - 1, visited, memo) ||
                   dfs(v, i, j + 1, h, w, s, energy - 1, visited, memo);

        memo[i][j][energy] = res;
        if (res) {
            return true;
        }
    }

    return false;
}

int main() {
    lli h, w;
    cin >> h >> w;
    lli si = 0, sj = 0;
    vector<vector<char>> v(h, vector<char>(w));

    for (lli i = 0; i < h; i++) {
        for (lli j = 0; j < w; j++) {
            char dd;
            cin >> dd;
            v[i][j] = dd;
            if (dd == 'S') {
                si = i;
                sj = j;
            }
        }
    }

    lli n;
    cin >> n;
    set<pair<pair<lli, lli>, lli>> s;
    for (lli i = 0; i < n; i++) {
        lli fir, sec, value;
        cin >> fir >> sec >> value;
        fir--;
        sec--;
        s.insert({{fir, sec}, value});
    }

    vector<vector<bool>> visited(h, vector<bool>(w, false));
    vector<vector<vector<bool>>> memo(h, vector<vector<bool>>(w, vector<bool>(10001, false))); // Memoization array for energy up to 1000
    lli energy = 0;
    bool ans = dfs(v, si, sj, h, w, s, energy, visited, memo);

    if (ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
