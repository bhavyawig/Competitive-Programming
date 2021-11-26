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
   lli q=sizeof(a)/sizeof(a[0]);
   sort(a,a+q);
   for(lli i=n-1;i>=0;i--)
   {
       if(ceil(sqrt(a[i]))!= floor(sqrt(a[i])))
       {
           cout<<a[i];
           exit(0);
       }
   }
    return 0;
}

