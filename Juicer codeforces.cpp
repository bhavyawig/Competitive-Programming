#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,b,d;
   cin>>n>>b>>d;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli ans=0,count=0;
   for(lli i=0;i<n;i++)
   {
       if(a[i]<=b)
       {
           ans=ans+a[i];
           if(ans>d)
           {
               ans=0;
               count++;
           }
       }
   }
   cout<<count<<endl;

    return 0;
}

