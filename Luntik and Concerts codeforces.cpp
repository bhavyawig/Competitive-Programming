#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b,c;
       cin>>a>>b>>c;
       lli sum=a+(2*b)+(3*c);
       if(sum%2==0)
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

