#include<bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
    lli n, x, y;
    cin >> n >> x >> y;

    vector<lli> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<lli, map<lli,lli>> g;
    lli fucl = 0;

    for (int i = 0; i < n; i++) {
        lli r1=a[i]%x;
        lli r2=a[i]%y;
        ++g[r1][r2];
    }

    for (auto &i:a) {
       int c=(x-(i%x))%x;

       fucl+=g[c][i%y]-(i%x==c);
    }
    cout<<(fucl >> 1)<<endl;
    }
    return 0;
}
