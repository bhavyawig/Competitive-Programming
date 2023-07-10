#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n,k;
     cin>>n>>k;
     lli a[n];
     for(lli i=0;i<n;i++)
         cin>>a[i];
     sort(a,a+n);
     lli pre[n+1];
     pre[0]=0;
     for(lli i=1;i<=n;i++)
        pre[i]=pre[i-1]+a[i-1];
        lli ans=0;
     for(lli i=0;i<=k;i++)
     {
        ans=max(ans,pre[n-k+i]-pre[2*i]);
     }
     cout<<ans<<endl;

    }

    return 0;

}
