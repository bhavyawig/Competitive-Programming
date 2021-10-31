#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli p[26];
   for(lli i=0;i<26;i++)
   {
       cin>>p[i];
   }
   for(lli i=0;i<26;i++)
   {
       char a;
       a=p[i]+96;
       cout<<a;
   }
    return 0;
}


