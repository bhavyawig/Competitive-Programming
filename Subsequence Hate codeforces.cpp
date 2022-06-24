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
       lli zero=0,one=0;
       lli len=s.length();
       if(len<=2)
       {
           cout<<0<<endl;
       }
       else
       {
           for(lli i=0;i<len;i++)
           {
               if(s[i]=='0')
                zero++;
               else
                one++;
           }
           if(zero<one)
           {
               if(s[0]=='0' && s[len-1]=='0')
               {
                   cout<<zero-1<<endl;
               }
               else if(s[0]=='0')
               {
                   cout<<zero-1<<endl;
               }
               else if(s[len-1]=='0')
               {
                   cout<<zero-1<<endl;
               }
               else
               {
                   cout<<zero<<endl;
               }
           }
           else if(one<zero)
           {
                if(s[0]=='1' && s[len-1]=='1')
               {
                   cout<<one-1<<endl;
               }
               else if(s[0]=='1')
               {
                   cout<<one-1<<endl;
               }
               else if(s[len-1]=='1')
               {
                   cout<<one-1<<endl;
               }
               else
               {
                   cout<<one<<endl;
               }
           }
           else
           {
               if(s[0]=='0' && s[len-1]=='0')
               {
                   cout<<zero-1<<endl;
               }
               else if(s[0]=='1' && s[len-1]=='1')
               {
                   cout<<one-1<<endl;
               }
               else
               {
                   cout<<one<<endl;
               }
           }
       }
   }

    return 0;
}

