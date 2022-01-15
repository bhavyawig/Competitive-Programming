#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       char f,s,t;
       char a[2];
       cin>>f>>s>>t;
       for(lli i=0;i<2;i++)
       {
           cin>>a[i];
       }
           if(a[0]==f || a[1]==f)
           {
               cout<<f<<endl;
           }
           else if(a[0]==s || a[1]==s)
           {
               cout<<s<<endl;
           }
           else
           {
               cout<<t<<endl;
           }
   }

    return 0;
}
