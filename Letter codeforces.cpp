
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   char a[n][m];
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   lli rows=INT_MAX,clmn=INT_MAX,rowl=INT_MIN,colmnl=INT_MIN,v=0;
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
            if(a[i][j]=='*')
           {
               rows=min(rows,i);
               rowl=max(rowl,i);
               colmnl=max(colmnl,j);
               clmn=min(clmn,j);
           }
       }
   }
   for(lli i=rows;i<=rowl;i++)
   {
       for(lli j=clmn;j<=colmnl;j++)
       {
           cout<<a[i][j];
       }
       cout<<endl;
   }
    return 0;
}
