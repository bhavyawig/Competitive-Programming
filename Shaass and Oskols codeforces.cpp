#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n+1];
   for(lli i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   lli m;
   cin>>m;
   for(lli i=0;i<m;i++)
   {
       lli x,y;
       cin>>x>>y;
       a[x-1]+=(y-1);
       a[x+1]+=(a[x]-y);
       a[x]=0;
   }
   for(lli i=1;i<=n;i++)
   {
       cout<<a[i]<<endl;
   }
    return 0;
}
