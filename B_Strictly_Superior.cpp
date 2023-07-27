#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli N,M;
   cin>>N>>M;
     vector<lli> P(N);
     vector<lli> C(N);
    vector<vector<lli>> F(N, vector<lli>(M,INT_MAX));
    for (lli i = 0; i < N; i++) {
        cin >> P[i];
      //  int C;
        cin >> C[i];
        for (lli j = 0; j < C[i]; j++) {
            cin >> F[i][j];
        }
        sort(F[i].begin(), F[i].begin() + C[i]);
    }
    bool found = false;
    for (lli i = 0; i<N; i++) {
        for (lli j = 0; j <N; j++) {
            if (i == j)
                continue;
            if (i!=j && P[i] >= P[j] && includes(F[j].begin(), F[j].begin()+C[j], F[i].begin(), F[i].begin()+C[i])) {
                if (P[i] > P[j] || C[j] > C[i]) {
                    found = true;
                    break;
                }
            }
        }
        if (found)
            break;
    }
    if (found==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}