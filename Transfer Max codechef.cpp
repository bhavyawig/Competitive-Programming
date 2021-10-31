#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
   for(lli i=0;i<n;i++)
   {
       max1=max(max1,a[i]+i);
       min1=min(min1,a[i]-i);
   }
   cout<<max1-min1+2<<endl;

    return 0;
}

