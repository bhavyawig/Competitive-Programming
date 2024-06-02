// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;

// void dfs(map<lli,lli> &m,vector<lli> &vis,lli node,lli &are,vector<lli> &a)
// {
//     vis[node]=1;
  
//     are=max(are,a[node]);

//     if(vis[m[node]]==0)
//     dfs(m,vis,m[node],are,a);
// }
//  lli chal(lli node,map<lli,lli> &m,lli maxii,lli k1,vector<lli> &a)
//  {
//     if(k1==0)
//     return 0;
//     if(a[node]==maxii)
//     {
//         return (k1)*maxii;
//     }
//     // if (memo[node][k1] != -1)
//     //     return memo[node][k1];

//     lli op1=a[node]+chal(node,m,maxii,k1-1,a);
//     lli op2=a[m[node]]+chal(m[node],m,maxii,k1-1,a);
//     return  max(op1,op2);
//  }
// int main() {

//     lli t;
//     cin>>t;
//     for(lli e=0;e<t;e++)
//     {
//        lli n,k,pb,pa;
//        cin>>n>>k>>pb>>pa;
//        map<lli,lli> m;
//        lli p[n+1];
//        vector<lli> a(n+1);
//        for(int i=1;i<n+1;i++)
//        {
//         cin>>p[i];
//         m[i]=p[i];
//        }
//        for(int i=1;i<n+1;i++)
//        {
//         cin>>a[i];
//        }
//        lli maxi=0,maxib=0;
//        vector<lli> vis(n+1,0);
//        lli are=0;
//         if(vis[pa]==0)
//         {
//              are=0;
//             dfs(m,vis,pa,are,a);
//             maxi=are;
//         }
//          vector<lli> vis1(n+1,0);
//         if(vis[pb]==0)
//         {
//             are=0;
//             dfs(m,vis1,pb,are,a);
//             maxib=are;
//         }
//      // vector<vector<lli>> me(n+2,vector<lli> (k+2,-1));
//        lli k1=k-1;
//        lli ans1=a[pb];
//         ans1+=chal(pb,m,maxib,k1,a);

//        k1=k-1;
//        lli ans2=a[pa];
//         ans2+=chal(pa,m,maxi,k1,a);

//         if(ans2==ans1) cout<<"Draw"<<endl;
//         else if(ans1>ans2) cout<<"Bodya"<<endl;
//         else cout<<"Sasha"<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(map<lli, lli> &m, vector<lli> &vis, lli node, lli &are, vector<lli> &a) {
    vis[node] = 1;
    are = max(are, a[node]);

    if (vis[m[node]] == 0)
        dfs(m, vis, m[node], are, a);
}

lli chal(lli node, map<pair<lli, lli>, lli> &memo, map<lli, lli> &m, lli maxii, lli k1, vector<lli> &a) {
    if (k1 == 0)
        return 0;
    if (a[node] == maxii)
        return (k1) * maxii;
    if (memo.find({node, k1}) != memo.end())
        return memo[{node, k1}];

    lli op1 = a[node] + chal(node, memo, m, maxii, k1 - 1, a);
    lli op2 = a[m[node]] + chal(m[node], memo, m, maxii, k1 - 1, a);
    return memo[{node, k1}] = max(op1, op2);
}

int main() {
    lli t;
    cin >> t;
    while (t--) {
        lli n, k, pb, pa;
        cin >> n >> k >> pb >> pa;
        map<lli, lli> m;
        vector<lli> a(n + 1);
        map<pair<lli, lli>, lli> memo;

        for (int i = 1; i <= n; i++) {
            cin >> m[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        lli maxi = 0, maxib = 0;
        vector<lli> vis(n + 1, 0);
        lli are = 0;

        if (vis[pa] == 0) {
            are = 0;
            dfs(m, vis, pa, are, a);
            maxi = are;
        }

        vector<lli> vis1(n + 1, 0);
        if (vis[pb] == 0) {
            are = 0;
            dfs(m, vis1, pb, are, a);
            maxib = are;
        }

        lli ans1 = a[pb] + chal(pb, memo, m, maxib, k - 1, a);
        lli ans2 = a[pa] + chal(pa, memo, m, maxi, k - 1, a);

        if (ans2 == ans1)
            cout << "Draw" << endl;
        else if (ans1 > ans2)
            cout << "Bodya" << endl;
        else
            cout << "Sasha" << endl;
    }
    return 0;
}
