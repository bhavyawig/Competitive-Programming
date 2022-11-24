#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b;
       cin>>a>>b;
       lli sum=a+b;
       if(sum==2 || sum==3)
        cout<<"Alice"<<endl;
       else
        cout<<"Bob"<<endl;
   }

    return 0;
}


