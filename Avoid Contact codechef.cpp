#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x,y;
       cin>>x>>y;
      if(x-y != 0)
        cout<<((2*y)+(x-y))<<endl;
        else
        cout<<((2*y)-1)<<endl;
   }

    return 0;
}
