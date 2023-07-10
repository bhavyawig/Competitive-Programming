#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
      lli n,m;
      cin>>n>>m;
      while(n!=m && n<150 && m<150)
      {
          if(n>m)
          {
              n--;
              m++;
          }
          else
          {
              m--;
              n=n+3;
          }
      }
      if(n==m) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }

    return 0;

}
