#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   //cout<<n<<" "<<k<< " ";
   vector<lli> a(n);
   for(lli i=0;i<n;i++)
   cin>>a[i];

  // cout<<k;
   lli sum=k*(k+1)/2;
   //cout<<sum<<" ";
   map<lli,lli> m;
   for(lli i=0;i<n;i++)
   {
    if(a[i]>=1 && a[i]<=k && m[a[i]]==0)
    {
        sum-=a[i];
        m[a[i]]++;
    }
   }
   cout<<sum;
}