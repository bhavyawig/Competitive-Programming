#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli m;
   cin>>m;
   lli sml[m];
   for(lli i=0;i<m;i++)
   {
       cin>>sml[i];
   }
   lli n;
   cin>>n;
   lli lrg[m+n];
   for(lli i=0;i<n;i++)
   {
       cin>>lrg[i];
   }
   lli p=0;
   for(lli i=0;i<m;i++)
   {
       if(sml[i]>=lrg[n-1])
       {
           p=sml[i];
       }
   }
   for(lli i=n;i<m+n;i++)
   {
       lrg[i]=p;
   }
   for(lli i=0;i<m+n;i++)
   {
       cout<<lrg[i]<<" ";
   }

    return 0;
}

