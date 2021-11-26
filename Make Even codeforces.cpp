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
      lli z=0;
      lli len=s.length();
      if(s[len-1]%2==0)
      {
          cout<<"0"<<endl;
      }
      else if(s[0]%2==0)
      {
          cout<<"1"<<endl;
      }
      else
      {
          for(lli i=0;i<len;i++)
          {
              if(s[i]%2==0)
              {
                  z++;
              }
          }
          if(z==0)
          {
              cout<<"-1"<<endl;
          }
          else
          {
              cout<<"2"<<endl;
          }
      }
   }

    return 0;
}

