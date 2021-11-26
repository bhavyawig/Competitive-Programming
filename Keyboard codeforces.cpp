#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s="qwertyuiopasdfghjkl;zxcvbnm,./";
   lli len=s.length();
   char a;
   cin>>a;
   string n,w;
   cin>>n;
   if(a=='R')
   {
      for(lli i=0;i<n.length();i++)
      {
          for(lli j=0;j<len;j++)
          {
              if(n[i]==s[j])
              {
                  w+=s[j-1];
              }
          }
      }
   }
   else
   {
       for(lli i=0;i<n.length();i++)
      {
          for(lli j=0;j<len;j++)
          {
              if(n[i]==s[j])
              {
                  w+=s[j+1];
              }
          }
      }
   }
   cout<<w<<endl;
    return 0;
}
