#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m;
       cin>>n>>m;
       lli a[n];
       lli sum=0;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
       if(m>=sum)
       {
           cout<<0<<endl;
       }
       else
       {
           cout<<sum-m<<endl;
       }
       }

    return 0;
}

