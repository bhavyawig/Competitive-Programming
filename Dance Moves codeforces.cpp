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
       if(x<=y)
       {
           cout<<(y-x+1)/2+(y-x)%2<<endl;
       }
       else
       {
           cout<<x-y<<endl;
       }
   }
    return 0;
}

