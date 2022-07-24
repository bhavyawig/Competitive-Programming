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
       lli cnt=0;
       while(a>0 && b>0)
       {
           if(a>b)
           {
              cnt+=(a/b);
              a-=(a/b)*b;
           }
           else
           {
               cnt+=(b/a);
               b-=(b/a)*a;
           }
       }
       cout<<cnt<<endl;
   }

    return 0;
}

