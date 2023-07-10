#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
      lli n;
      string s,temp;
      cin>>n>>s;
      map<char,int> m;
      for(int i=0;i<n;i++)
      {
          temp+=s[i];
          for(int j=i+1;j<n;j++)
          {
              if(s[i]==s[j])
              {
                  i=j;
                  break;
              }
          }
      }
      cout<<temp<<endl;
    }

    return 0;

}
