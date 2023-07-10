#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n,k,q;
  cin>>n>>k>>q;
  priority_queue<int> pq;
  map<int,int> m;
  lli a[n]={0};
  lli sum=0;
  for(int i=0;i<q;i++)
  {
      lli x,y;
      cin>>x>>y;
      a[x-1]=y;
      sort(a,a+n);
      for(int j=n-1;j>n-k;j--)
        sum+=a[j];
      cout<<sum<<endl;
      sum=0;
  }

    return 0;

}
