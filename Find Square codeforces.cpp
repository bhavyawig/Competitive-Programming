#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   char a[n][m];
   lli x=0;
   lli first=0,first2=0,last=0,last1=0;
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           cin>>a[i][j];
           if(a[i][j]=='B' && x==0)
           {
               first=i;//0
               first2=j;//2
               x++;
           }
           if(a[i][j]=='B')
           {
               last=i;//2
               last1=j;//4
           }
       }
   }
   cout<<((last+first)/2) +1<<" "<<((last1+first2)/2 )+1;

    return 0;
}

