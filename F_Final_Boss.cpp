// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;


// void process_test_case(int h, int n, const vector<int>& dam, const vector<int>& cool) {
//     priority_queue<vector<lli>, vector<vector<lli>>, greater<vector<lli>>> pq;

//     for(int i=0;i<n;i++)
//     {
//         pq.push({0,dam[i],cool[i]});
//     }
//     lli turn=0;
//     while(h>0)
//     {
//         int time=pq.top()[0];
//         while(pq.top()[0]==time)
//         {
//             vector<lli> vec=pq.top();
//             pq.pop();
//             h-=vec[1];
//             pq.push({vec[0]+vec[2],vec[1],vec[2]});
//         }
//         turn=time;
//     }
//     cout<<turn<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     for (int i = 0; i < t; ++i) {
//         int h, n;
//         cin >> h >> n;
//         vector<int> damages(n);
//         vector<int> cooldowns(n);
//         for (int j = 0; j < n; ++j) {
//             cin >> damages[j];
//         }
//         for (int j = 0; j < n; ++j) {
//             cin >> cooldowns[j];
//         }
//         process_test_case(h, n, damages, cooldowns);
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Attack {
    long long time;
    long long damage;
    long long cooldown;

    bool operator>(const Attack& other) const {
        return time > other.time;
    }
};

void process_test_case(long long h, int n, const vector<long long>& dam, const vector<long long>& cool) {
    priority_queue<Attack, vector<Attack>, greater<Attack>> pq;

    for (int i = 0; i < n; ++i) {
        pq.push({0, dam[i], cool[i]});
    }

    long long turn = 0;
    while (h > 0) {
        Attack curr = pq.top();
        pq.pop();

        turn = curr.time;
        h -= curr.damage;
        curr.time += curr.cooldown;

        pq.push(curr);
    }

    cout << turn+1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long h;
        int n;
        cin >> h >> n;
        vector<long long> damages(n);
        vector<long long> cooldowns(n);
        for (int j = 0; j < n; ++j) {
            cin >> damages[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> cooldowns[j];
        }
        process_test_case(h, n, damages, cooldowns);
    }

    return 0;
}
