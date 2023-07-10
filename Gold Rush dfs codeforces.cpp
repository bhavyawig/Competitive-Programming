#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool dfs(int n,int m)
{
    if(n==m) return true;
    else if(n%3!=0) return false;
    else {
       return  (dfs(n/3,m) || dfs((2*n)/3,m));
    }
}

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n,m;
       cin>>n>>m;
       bool ans=dfs(n,m);
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }

    return 0;

}
