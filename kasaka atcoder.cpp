#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  string s;
  cin>>s;
  lli len=s.length();
  string n=s;
  reverse(n.begin(),n.end());
  if(n==s)
  {
      cout<<"yes";
  }
  else
  {
      if(s[len-1]=='a')
      {
          string cpy,cpy1;
          for(lli i=0;i<len-1;i++)
          {
              cpy+=s[i];
              cpy1+=s[i];
          }
        reverse(cpy.begin(),cpy.end());
          if(cpy1==cpy)
          {
              cout<<"Yes";
          }
          else
          {
              cout<<"No";
          }
      }
      else
      {
          cout<<"no";
      }
  }
    return 0;
}

