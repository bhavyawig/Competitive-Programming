#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   lli a[n];
   for(lli i=0;i<n;i++)
   cin>>a[i];

   for(lli i=0;i<n;i++)
   {
    if(a[i]%k==0)
    cout<<a[i]/k<<" ";
   }
}