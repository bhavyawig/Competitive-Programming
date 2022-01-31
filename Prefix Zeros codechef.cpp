#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       string cp;
       for(lli i=0;i<n;i++)
       {
           if(s[i]=='0')
           {
               cp+='0';
           }
           else if(s[i]=='1')
           {
               cp+='9';
           }
           else if(s[i]=='2')
           {
               cp+='8';
           }
           else if(s[i]=='3')
           {
               cp+='7';
           }
           else if(s[i]=='4')
           {
               cp+='6';
           }
           else if(s[i]=='5')
           {
               cp+='5';
           }
           else if(s[i]=='6')
           {
               cp+='4';
           }
           else if(s[i]=='7')
           {
               cp+='3';
           }
           else if(s[i]=='8')
           {
               cp+='2';
           }
           else if(s[i]=='9')
           {
               cp+='1';
           }
       }
       for(lli i=0;i<cpy.length();i++)
       {
           lli num=stoi(cpy[i]);
           if(num>)
       }
   }

    return 0;
}

