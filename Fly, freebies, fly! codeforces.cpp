#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,count=0;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli t;
   cin>>t;
   //lli q=sizeof(a)/sizeof(a[0]);
   //sort(a,a+q);
   for(lli i=1;i<n;i++)
   {
       if(a[i]-a[i-1]>t)
       {
           count++;
       }
   }
   cout<<n-count-1<<endl;

    return 0;
}

