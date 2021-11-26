#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli len=s.length();
   if(len<7)
   {
       cout<<"NO"<<endl;
   }
   else{
   for(lli i=0;i<len-7;i++)
   {
       if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0' )
       {
           cout<<"YES"<<endl;
           exit(0);
       }
       if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1' )
       {
           cout<<"YES"<<endl;
           exit(0);
       }
   }
   cout<<"NO"<<endl;
   }

    return 0;
}

