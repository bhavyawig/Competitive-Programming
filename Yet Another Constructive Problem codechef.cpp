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
       lli q=0;
       for(lli a=1;a<=100;a++)
       {
           for(lli b=1;b<=100;b++)
           {
               for(lli c=1;c<=100;c++)
               {
                   if(a!=b && b!=c && c!=a)
                   {
                       if((a|b)&(b|c)&(c|a)==x && q==0)
                       {
                           cout<<a<<" "<<b<<" "<<c<<endl;
                           q++;
                           break;
                       }
                   }
               }
           }
       }
   }

    return 0;
}

