
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli b[n];
   for(lli i=0;i<m;i++)
   {
       cin>>b[i];
   }
   vector<lli> a(n,-1);
   for(lli i=0;i<m;i++)
   {
       for(lli j=b[i]-1;j<n;j++)
       {
           if(a[j]==-1)
           {
               a[j]=b[i];
           }
       }
   }
   for(lli i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}
