#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli h,w,z=0;
   cin>>h>>w;
   lli a[h][w];
   for(lli i=0;i<h;i++)
   {
       for(lli j=0;j<w;j++)
       {
           cin>>a[i][j];
       }
   }
      for(lli i2=0;i2<h;i2++)
   {
           for(lli j2=0;j2<w;j2++)
           {
                for(lli i1=0;i1<h;i1++)
       {
               for(lli j1=0;j1<w;j1++)
               {
                   if(i2>i1 && j2>j1){
                   if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2])
                   {
                       cout<<"No"<<endl;
                       exit(0);
                   }
                   }
               }
           }
       }
   }
   cout<<"Yes"<<endl;
    return 0;
}

