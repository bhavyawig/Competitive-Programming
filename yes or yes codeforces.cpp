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
       if(s=="YES" || s=="Yes" || s=="YEs" || s=="yes" || s=="YeS" || s=="yES" || s=="yEs" || s=="yeS")
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

    return 0;
}

