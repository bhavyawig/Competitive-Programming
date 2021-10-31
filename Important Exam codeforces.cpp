#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n,m;
  cin>>n>>m;
  char a[n][m];
  lli n[m];
  set<lli> s;
  for(lli i=0;i<n;i++)
  {
      for(lli j=0;j<m;j++)
      {
          cin>>a[i][j];
      }
  }
  for(lli i=0;i<m;i++)
  {
      cin>>n[i];
  }
  for(lli i=0;i<m;i++)
  {
      for(lli j=0;j<n;j++)
      {
          s.insert(a[i][j]);
      }
      lli diff=s.size();
      if(diff==n)
      {
          count=count+n[i];
      }
      else if(diff<n)
      {

      }
  }
    return 0;
}
