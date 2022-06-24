#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,s;
       cin>>n>>s;
       lli sqr=n*n;
       lli cnt=s/sqr;
       cout<<cnt<<endl;
   }

    return 0;
}

