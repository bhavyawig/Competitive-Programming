#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string s;
       lli odd=0,even=0;
       cin>>s;
       for(lli i=0;i<s.length();i++)
       {
           if(i%2==0)
           {
               odd=odd+s[i];
           }
           else
           {
               even=even+s[i];
           }
       }
      // cout<<odd<<" "<<even<<endl;
       lli diff=abs(odd-even);
       if(diff%3==0 || diff%5==0 || diff%7==0)
       {
           cout<<"Prime String"<<endl;
       }
       else
       {
           cout<<"Casual String"<<endl;
       }
   }

    return 0;
}

