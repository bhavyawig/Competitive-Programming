#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli h,w;
  cin>>h>>w;
  lli a[h][w];
  for(lli i=0;i<h;i++)
  {
      for(lli j=0;j<w;j++)
      {
          cin>>a[i][j];
      }
  }
  for(lli i=0;i<w;i++)
  {
      for(lli j=0;j<h;j++)
      {
          cout<<a[j][i]<<" ";
      }
      cout<<endl;
  }

    return 0;
}

