#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k,x;
   cin>>n>>k>>x;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];

   sort(a,a+n);
   for(lli i=n-1;i>=0;i--)
   {
       if(k>=1 && a[i]<=x)
       {
           k--;
           a[i]=0;
       }
       else if(k>=1  && a[i]>x)
       {
           lli as=a[i]/x;
           k=k-as;
           cnt+=(a[i]-(k*x));
           a[i]=a[i]-(k*x);
       }
   }
   if(k>0)
   {
       sort(a,a+n);
       for(lli i=n-1;i>=0;i--)
       {
           if(k>0 && )
       }
   }

    return 0;
}

