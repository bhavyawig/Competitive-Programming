#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b,c,d;
       lli cnt=0;
       cin>>a>>b>>c>>d;
       if(b>a)
        cnt++;
       if(c>a)
        cnt++;
       if(d>a)
        cnt++;
       cout<<cnt<<endl;
   }

    return 0;
}


