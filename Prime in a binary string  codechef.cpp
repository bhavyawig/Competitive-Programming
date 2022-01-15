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
          int prime=0;
          vector<int> v;
          for(int i=0;i<s.size();i++)
          {
              if(s[i]=='1')
              {
                  v.push_back(i);
              }
          }
          if(s.find("10")!=string::npos)
            prime++;
          for(int i=1;i<v.size();i++)
          {
              if(v[i]-v[i-1]==1 || (v[i]-v[i-1])%2==0)
              {
                  prime++;
              }
          }
          if(prime==0)
          {
              cout<<"no"<<endl;
          }
          else
          {
              cout<<"yes"<<endl;
          }

   }

    return 0;
}
