#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli a[n][4];
   lli count=1;
   for(lli i=n-1;i>=0;i--)
   {
       a[i][0]=count++;
       a[i][3]=count++;
   }
   for(lli i=n-1;i>=0;i--)
   {
       a[i][1]=count++;
       a[i][2]=count++;
   }
   for(lli i=n-1;i>=0;i--)
   {
       if(a[i][1]<=m)
       {
           cout<<a[i][1]<<" ";
       }
       if(a[i][0]<=m)
       {
           cout<<a[i][0]<<" ";
       }
       if(a[i][2]<=m)
       {
           cout<<a[i][2]<<" ";
       }
       if(a[i][3]<=m)
       {
           cout<<a[i][3]<<" ";
       }
   }


    return 0;
}

