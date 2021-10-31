#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   for(lli i=0;i<s.length();)
   {
       if(s[i]=='-' && s[i+1]=='-')
       {
           cout<<"2";
           i=i+2;
       }
       else if(s[i]=='-' && s[i+1]=='.')
       {
           cout<<"1";
           i=i+2;
       }
       else if(s[i]=='.')
       {
           cout<<"0";
           i++;
       }
   }

    return 0;
}

