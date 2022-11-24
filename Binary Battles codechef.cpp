#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,a,b;
       cin>>n>>a>>b;
       lli x=log(n)/log(2);
       lli ans=(x*a)+(b*(x-1));
       cout<<ans<<endl;
   }

    return 0;
}


