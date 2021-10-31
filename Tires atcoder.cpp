#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli lst=s.length();
   if(s[lst-2]=='e' && s[lst-1]=='r')
   {
       cout<<"er"<<endl;
   }
   else
   {
       cout<<"ist"<<endl;
   }
    return 0;
}

