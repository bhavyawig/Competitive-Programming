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
      cout<<"Yes";
  }
  else
  {
      if(s[len-1]=='a')
      {
          string cpy,cpy1;
          lli cnt=0,x=0,cnt1=0,q=0;
          for(lli i=len-2;i>=0;i--)
          {
              if(s[i]=='a' && x==0)
              {
                  cnt++;
              }
              else
              {
                  x++;
              }
          }
          for(lli i=0;i<len;i++)
          {
              if(s[i]=='a' && q==0)
              {
                  cnt1++;
              }
              else
              {
                  q++;
              }
          }
          if(cnt1>cnt+1)
          {
              cout<<"No"<<endl;
          }
          else{
          for(lli i=cnt1;i<len-1-cnt;i++)
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
      }
      else
      {
          cout<<"No";
      }
  }
    return 0;
}

