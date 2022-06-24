#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,q;
   cin>>n>>q;
   vector<lli> a;
   lli vis[n]={0};
   for(lli i=0;i<n;i++)
   {
       lli samp;
       cin>>samp;
       a.push_back(samp);
   }
   sort(a.begin(),a.end());
   for(lli i=0;i<q;i++)
   {
       lli l,r;
       cin>>l>>r;
       vis[l-1]++;
       vis[r-1]++;

   }

    return 0;
}
