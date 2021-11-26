#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  while(t>0)
  {
      for(lli i=1;i<s.length();i++)
      {
          if(s[i]=='G' && s[i-1]=='B')
          {
              s[i]='B';
              s[i-1]='G';
              i++;
          }
      }
      t--;
  }
  cout<<s<<endl;

    return 0;
}
