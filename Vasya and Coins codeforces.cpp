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
       if(a==0)
       {
           cout<<1<<endl;
       }
       else if(b==0)
       {
           cout<<a+1<<endl;
       }
       else if(a<b)
       {
           cout<<(2*b)+a+1<<endl;
       }
       else
       {
           cout<<a+(2*b)+1<<endl;
       }
   }

    return 0;
}

