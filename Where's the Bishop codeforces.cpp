#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       char a[8][8];
       for(lli i=0;i<8;i++)
       {
           for(lli j=0;j<8;j++)
           {
               cin>>a[i][j];
           }
       }
       for(lli i=1;i<7;i++)
       {
           for(lli j=1;j<7;j++)
           {
               if(a[i-1][j+1]=='#' && a[i-1][j-1]=='#' && a[i+1][j+1]=='#' && a[i+1][j-1]=='#')
                cout<<i+1<<" "<<j+1<<endl;
           }
       }
   }

    return 0;
}


