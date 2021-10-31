#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a[4];
       for(lli i=0;i<4;i++)
       {
           cin>>a[i];
       }
       lli q=sizeof(a)/sizeof(a[0]);
       sort(a,a+q);
       cout<<a[0]*a[2]<<endl;

   }

    return 0;
}

