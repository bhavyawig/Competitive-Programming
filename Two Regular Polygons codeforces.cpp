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
       if(n%m==0)
        cout<<"YES\n";
       else
        cout<<"NO\n";
   }

    return 0;
}

