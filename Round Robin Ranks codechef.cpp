#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x;
       cin>>n>>x;
       lli diff=(2*n-x-1)/2;
       cout<<2*diff<<endl;
   }

    return 0;
}
