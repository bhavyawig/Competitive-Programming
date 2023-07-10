#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       lli sum=(n*(n-1))/2;
       if(k<n/2)
       {
           lli val=n-2*k;
           sum-=((val*(val-1))/2);
       }
       cout<<sum<<endl;
   }

    return 0;
}


