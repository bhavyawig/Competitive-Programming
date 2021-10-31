#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,z=0;
       cin>>n;
       string s;
       cin>>s;
       for(lli i=1;i<n;i++)
       {
           if(s[i]=='L' && s[i-1]=='L')
           {
               z++;
           }
           if(s[i]=='R' && s[i-1]=='R')
           {
               z++;
           }
       }
       if(z>=1)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
   }

    return 0;
}

