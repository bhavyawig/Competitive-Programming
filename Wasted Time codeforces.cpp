#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n,k;
  cin>>n>>k;
  lli a[n][2];
  for(lli i=0;i<n;i++)
  {
      cin>>a[i][0]>>a[i][1];
  }
  double sum=0;
  for(lli i=1;i<n;i++)
  {
      lli x=a[i][0]-a[i-1][0];
      lli x2=pow(x,2);
      lli y=a[i][1]-a[i-1][1];
      lli y2=pow(y,2);
      lli get=x2+y2;
      double ans=sqrt(get);
      sum=sum+ans;
  }
  double an=(sum*k)/50;
  cout<<setprecision(9)<<an;

    return 0;
}

