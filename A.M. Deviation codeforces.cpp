#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a1,a2,a3;
       cin>>a1>>a2>>a3;
       if((a1+a3-(2*a2))%3==0)
       {
           cout<<"0"<<endl;
       }
       else
       {
           cout<<"1"<<endl;
       }
   }

    return 0;
}

