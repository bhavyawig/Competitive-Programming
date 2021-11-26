#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       char a[9][9];
       for(lli i=0;i<9;i++)
       {
          for(lli j=0;j<9;j++)
          {
              cin>>a[i][j];
          }
       }
       for(lli i=0;i<9;i++)
       {
          for(lli j=0;j<9;j++)
          {
              if(a[i][j]=='9')
              {
                  a[i][j]='1';
              }
          }
       }
       for(lli i=0;i<9;i++)
       {
          for(lli j=0;j<9;j++)
          {
              cout<<a[i][j];
          }
          cout<<endl;
       }

   }

    return 0;
}

