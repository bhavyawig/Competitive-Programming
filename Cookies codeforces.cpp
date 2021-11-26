#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,sum=0;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       sum=sum+a[i];
   }
   lli count=0;
   for(lli i=0;i<n;i++)
   {
       if((sum-a[i])%2==0)
       {
           count++;
       }
   }
   cout<<count<<endl;
    return 0;
}
