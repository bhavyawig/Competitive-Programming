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
       lli dif=x+(2*y);
       if(dif%2==0 && x%2==0 && y%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

   }

    return 0;
}

