#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
      lli n,d;
      cin>>n>>d;
      lli mul;
      if(d==0)
      {
          mul=1;
      }
      else if(d<=10)
      {
           mul=1;
          for(lli i=1;i<=d;i++)
          {
              mul=mul*2;
          }
      }
      else
      {
           mul=1024;
          for(lli i=11;i<=d;i++)
          {
              if(n<mul)
              break;


              mul=mul*3;
          }
      }
      if(mul<=n)
      {
          cout<<mul<<endl;
      }
      else
      {
          cout<<n<<endl;
      }
   }

    return 0;
}

