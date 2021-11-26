#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n,m;
  cin>>n>>m;
  char a[n][m];
  lli u[m];
  lli count=0;
  for(lli i=0;i<n;i++)
  {
      for(lli j=0;j<m;j++)
      {
          cin>>a[i][j];
      }
  }
  for(lli i=0;i<m;i++)
  {
      cin>>u[i];
  }
  for(lli i=0;i<m;i++)
  {
      map<char,lli> w;
      for(lli j=0;j<n;j++)
      {
          w[a[j][i]]++;
      }
      lli maxx=0;
      for(auto x : w)
      {
          maxx=max(maxx,x.second);
      }
      count=count+(maxx*u[i]);
  }
  cout<<count<<endl;


    return 0;
}
