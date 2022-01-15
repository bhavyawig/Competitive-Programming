#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   map<lli,lli> me;
   for(lli i=0;i<m;i++)
   {
       lli a,b,k;
       cin>>a>>b>>k;
       me[a]+=k;
       me[b+1]+=(-1)*k;
   }
   lli ans=INT_MIN;
   lli sum=0;
   for(int i=1;i<=n;i++)
   {
       sum+=me[i];
       //cout<<sum<<endl;
       ans=max(ans,sum);
   }
   cout<<ans<<endl;

    return 0;
}

