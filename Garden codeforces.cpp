#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n,k;
  cin>>n>>k;
  lli a[n];
  for(lli i=0;i<n;i++)
  {
      cin>>a[i];
  }
  lli q=sizeof(a)/sizeof(a[0]);
  sort(a,a+q);
  for(lli i=n-1;i>=0;i--)
  {
      if(k%a[i]==0)
      {
          cout<<k/a[i]<<endl;
          exit(0);
      }
  }
    return 0;
}

