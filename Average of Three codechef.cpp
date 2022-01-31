#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x;
       cin>>x;
       lli num=3*x;
       lli last=num-3;
       cout<<"1 2 "<<last<<endl;
   }

    return 0;
}

