#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli k;
  cin>>k;
  string s;
  multiset<char> new1;
  cin>>s;
  lli n;
  cin>>n;
  while(k>0){
  for(lli i=0;i<s.length();i++)
  {
      new1.insert(s[i]);
  }
  k--;
  }
  for(lli i=0;i<n;i++)
  {
      lli p;
      char a;
      cin>>p>>a;

      new1.erase(new1.begin()+p-1);
  }
  for(lli i=0;i<new1.size();i++)
  {
      cout<<new1[i];
  }

    return 0;
}

