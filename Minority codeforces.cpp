#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string s;
       cin>>s;
       lli len=s.length();
       lli zero=0,one=0;
       for(lli i=0;i<len;i++)
       {
           if(s[i]=='0')
           {
               zero++;
           }
           else{
            one++;
           }
       }
       if(zero==one)
       {
           cout<<zero-1<<endl;
       }
       else{
       cout<<min(zero,one)<<endl;
       }
   }

    return 0;
}

