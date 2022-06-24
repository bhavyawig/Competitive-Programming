#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   lli one=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
       {
           one++;
       }
   }
   for(lli i=0;i<n;i++)
   {
       if(a[i]==1)
       {
           a[i]=-1;
       }
       else
       {
           a[i]=1;
       }
   }
   lli z=0,sum=0,x=0;
   for(lli i=0;i<n;i++)
   {
        x=max(z,a[i]+x);
      sum=max(sum,x);
   }
   if(one==n)
   {
       cout<<n-1<<endl;
   }
   else
   {
   cout<<sum+one<<endl;
   }
    return 0;
}

