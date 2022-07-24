#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x,y,a,b;
       cin>>x>>y>>a>>b;
       if((y-x)%(a+b)==0)
        cout<<(y-x)/(a+b)<<endl;
       else
        cout<<-1<<endl;
   }

    return 0;
}

