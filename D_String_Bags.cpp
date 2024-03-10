#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

typedef long long ll;
#define int long long
#define mod 1000000007
#define mod2 998244353
#define INF 2000000000000000000
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define pi pair<int,int>
#define vpi vector<pi>
#define vvpi vector<vpi>
#define forn(i, n) for(int i=0;i<n;i++)
#define all(x) begin(x), end(x)
#define pb(x) push_back(x)
#define sz(x) (int)x.size()
#define gcd(x, y) __gcd(x, y)
#define setbits(x) __builtin_popcountll(x)
#define f first
#define s second

int power(int a, int x, int m){
    a=a%m;
    int ans=1;
    while(x){
        if(x&1)ans=(ans*a)%m;
        x=x>>1;
        a=(a*a)%m;
    }
    return ans;
}

int dp[105][105];

int solve (int ind, int i, string &t, vector<vector<string>> &arr, int n) {
    if (i == t.length()) return 0;
    if (ind == n) return INF;
    if (dp[ind][i] != -1) return dp[ind][i];
    int ans = solve(ind+1, i, t, arr, n);
    for (auto &str: arr[ind]) {
        bool match = true;
        for (int j = 0; j < sz(str); j++) {
            if (str[j] != t[i+j]){
                match = false;
            }
        }
        if (match) {
            ans = min(ans, 1 + solve(ind+1, i+sz(str), t, arr, n));
        }
    }
    return (dp[ind][i] = ans);
}
void solve(){
    string t; cin >> t;
    int n; cin >> n;
    vector<vector<string>> arr(n);
    memset(dp, -1, sizeof dp);
    forn (i, n) {
        int sz; cin >> sz;
        arr[i].resize(sz);
        forn (j, sz) {
            cin >> arr[i][j];
        }
    }
    int ans = solve(0, 0, t, arr, n);
    if (ans >= INF) ans = -1;
    cout << ans << "\n";
}

void precompute(){
    // Precomputation can be done here

}

int32_t main(){
   
    int t=1;
    // cin>>t;
    precompute();
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<": ";
        solve();
    }
}
