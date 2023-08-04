#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli mod=1e9+7;
int main()
{
   lli n;
   cin>>n;
   vector<lli> a(n);
   for(lli i=0;i<n;i++)
   a[i]=i+1;
   lli sum=(n*(n+1))/2;
   if(sum%2!=0)
   cout<<"0"<<endl;
   else{
   sum=sum/2;
   vector<vector<lli>> t(n+1,vector<lli> (sum+1));
   for(lli i=0;i<n+1;i++)
   t[i][0]=1;
   for(lli i=1;i<sum+1;i++)
   t[0][i]=0;
   for(lli i=1;i<n+1;i++)
   {
    for(lli j=1;j<sum+1;j++)
    {
        if(a[i-1]<=j)
        {
            t[i][j]=t[i-1][j]%mod+t[i-1][j-a[i-1]]%mod;
        }
        else
        t[i][j]=t[i-1][j]%mod;
    }
   }
   cout<<t[n][sum]/2<<endl;
   }
    return 0;
}