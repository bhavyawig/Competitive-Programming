#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n;
  cin>>n;
  lli a[n];
  for(lli i=0;i<n;i++)
  {
      cin>>a[i];
  }
  // 1 7 4 9
  lli q=sizeof(a)/sizeof(a[0]);
  sort(a,a+q);
  lli count=0;
  lli c=floor((double)sqrt(a[n-1]));
  for(lli i=0;i<n;i++)
  {
      if(a[i]!=1){
      lli w=(log (a[i])/log (c));
      count=count+(a[i]-(w*w));
      cout<<count<<endl;
      }
  }
  cout<<count<<endl;
    return 0;
}

