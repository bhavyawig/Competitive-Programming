#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
      lli a,b,c;
      cin>>a>>b>>c;
      if( (a==b && c%2==0) || (a==c && b%2==0)|| (b==c && a%2==0))
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
   }

    return 0;
}

