#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   if(n>=1 && n<10)
   {
       cout<<"1"<<endl;
   }
   else
   {
      string s=to_string(n);
      lli len=s.length();
      string p;
      if(s[0]=='9')
      {
          p+="10";
         // cout<<"p"<<p<<endl;
      }
      else
      {
          p+=s[0]+1;
         // cout<<p[0]<<endl;
      }
      for(lli i=1;i<len;i++)
      {
          p+="0";
      }
      //cout<<"s"<<s<<endl;
      //cout<<"p"<<p<<endl;
      lli a1=stoi(s);
      lli a2=stoi(p);
      cout<<a2-a1;
   }

    return 0;
}

