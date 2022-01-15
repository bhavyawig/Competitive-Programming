#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   char a[n][m];
   lli z=0,p=0;
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   bool ans=false;
    for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           ans=false;
           if(a[i][j]=='#')
           {
               if(i+2<n && j+2<m)
               {
                   if(a[i+1][j]=='#' && a[i+2][j]=='#' && a[i][j+1]=='#' && a[i][j+2]=='#' && a[i+1][j+2]=='#' && a[i+2][j+1]=='#' && a[i+2][j+2]=='#')
                   {
                       ans=true;
                   }
               }
               if(i+2<n && j+1<m && j-1>=0)
               {
                   if(a[i][j-1]=='#' && a[i][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#' && a[i+2][j-1]=='#' && a[i+2][j]=='#' && a[i+2][j+1]=='#')
                   {
                       ans=true;
                   }
               }
               if(j<m && j-2>=0 && i+2<n)
               {
                   if(a[i][j-2]=='#' && a[i][j-1]=='#' && a[i+1][j]=='#' && a[i+1][j-2]=='#' && a[i+2][j]=='#' && a[i+2][j-1]=='#' && a[i+2][j-2]=='#')
                   {
                       ans=true;
                   }
               }
               if(i-1>=0 && i+1<n && j+2<m)
               {
                   if(a[i-1][j]=='#' && a[i-1][j+1]=='#' && a[i-1][j+2]=='#' && a[i][j+2]=='#' && a[i+1][j]=='#' && a[i+1][j+1]=='#' && a[i+1][j+2]=='#')
                   {
                       ans=true;
                   }
               }
               if(i+1<n && j-2>=0 && i-1>=0)
               {
                   if(a[i-1][j]=='#' && a[i-1][j-1]=='#' && a[i-1][j-2]=='#' && a[i][j-2]=='#' && a[i+1][j]=='#' && a[i+1][j-1]=='#' && a[i+1][j-2]=='#')
                   {
                       ans=true;
                   }
               }
               if(j+2<m && i-2>=0)
               {
                   if(a[i][j+1]=='#' && a[i][j+2]=='#' && a[i-1][j]=='#' && a[i-1][j+2]=='#' && a[i-2][j]=='#' && a[i-2][j+1]=='#' && a[i-2][j+2]=='#')
                   {
                       ans=true;
                   }
               }
               if(i-2>=0 && j-1>=0 && j+1<m)
               {
                   if(a[i][j-1]=='#' && a[i][j+1]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i-2][j]=='#' && a[i-2][j-1]=='#' && a[i-2][j+1]=='#')
                   {
                       ans=true;
                   }
               }
               if(j-2>=0 && i-2>=0)
               {
                   if(a[i][j-1]=='#' && a[i][j-2]=='#' && a[i-1][j]=='#' && a[i-1][j-2]=='#' && a[i-2][j]=='#' && a[i-2][j-1]=='#' && a[i-2][j-2]=='#')
                   {
                       ans=true;
                   }
               }
               if(ans==false)
               {
                   z++;
               }
           }
       }
   }
   if(z==0)
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }




    return 0;
}

