#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli countSubsequence(lli* A, lli N, lli X)
{
    lli dp[N+1][X+1];
    memset(dp, 0, sizeof(dp));

    for(lli i=0 ; i<=N ;i++){
        for(lli j=0 ;j<=X ; j++){
            if(i==N){
                dp[i][j] = 1;
            }
        }
    }

    for(lli i=N-1; i>=0; i--) {
        for(lli j=1; j<=X; j++) {

            if(A[i] <= j) {
                dp[i][j] = dp[i+1][j] + dp[i+1][j-A[i]];
            } else {
                dp[i][j] = dp[i+1][j];
            }
        }
    }

    return dp[0][X];
}

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
      lli n,k;
      cin>>n>>k;
      lli val=log(n)/log(2);
      lli a[min(k,val+1)];
      for(lli i=0;i<min(k,val+1);i++)
      {
          a[i]=pow(2,i);
      }
     // for(int i=0;i<min(k,val+1);i++)
      //  cout<<a[i]<<endl;
      cout << countSubsequence(a, min(k,val+1), n)<<endl;
    }

    return 0;

}
