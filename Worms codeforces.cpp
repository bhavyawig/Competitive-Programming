#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   lli sum=0,ans=0,p=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(lli i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   for(lli i=n-1;i>=0;i--)
   {
       p=a[i];
       ans=ans+a[i];
       a[i]=sum-ans+p;
   }
   lli ne[sum+1],no=0;
   for(lli i=1;i<=sum;i++)
   {
       if(i>a[no])
       {
           no++;
       }
        ne[i]=no+1;
   }
   lli m;
   cin>>m;
   for(lli i=0;i<m;i++)
   {
       lli q;
       cin>>q;
       cout<<ne[q]<<endl;
   }


    return 0;
}

