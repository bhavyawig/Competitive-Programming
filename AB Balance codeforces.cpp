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
       lli count=0;
       for(lli i=1;i<s.length();i++)
       {
           if(s[i]=='b' && s[i-1]=='a')
           {
               count++;
           }
           if(s[i]=='a' && s[i-1]=='b')
           {
               count--;
           }
       }
       if(count==0)
       {
           cout<<s<<endl;
       }
       else if(count==1)
       {
           for(lli i=0;i<s.length()-1;i++)
           {
               cout<<s[i];
           }
           cout<<"a"<<endl;
       }
       else
       {
            for(lli i=0;i<s.length()-1;i++)
           {
               cout<<s[i];
           }
           cout<<"b"<<endl;
       }


   }

    return 0;
}

