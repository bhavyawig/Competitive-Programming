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
   lli z=0;
   for(lli i=1;i<n-1;i++){
   if(a[i]+a[i-1]>a[i+1] && a[i]+a[i+1]>a[i-1] && a[i+1]+a[i-1]>a[i])
   {
       z++;
   }
   }
   if(z>0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }

    return 0;
}

