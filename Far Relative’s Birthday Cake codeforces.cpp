#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,count=0;
   cin>>n;
   char a[n][n];
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
   }
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++)
       {
           if(a[i][j]=='C')
           {
               for(lli k=j+1;k<n;k++)
               {
                   if(a[i][k]=='C')
                   {
                       count++;
                   }
               }
               for(lli k=i+1;k<n;k++)
               {
                   if(a[k][j]=='C')
                   {
                       count++;
                   }
               }
           }

       }
   }
   cout<<count<<endl;

    return 0;
}

