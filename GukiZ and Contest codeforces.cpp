#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n],s[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli count=0;
   for(lli i=0;i<n;i++)
   {
       count=0;
      for(lli j=0;j<n;j++)
   {
       if(j!=i && a[j]>a[i])
       {
           count++;
       }
   }
   s[i]=count;
   }
   for(lli i=0;i<n;i++)
   {
       cout<<s[i]+1<<" ";
   }


    return 0;
}

