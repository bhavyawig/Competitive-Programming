#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   char a[n][m];
   lli w=0;
   for(lli i=0;i<n;i++)
   {
       string s;
       cin>>s;
       for(lli j=0;j<m;j++)
       {
           a[i][j]=s[j];
       }
   }
    for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
          if((i+j)%2==0 && a[i][j]=='.')
          {
              cout<<"B";
          }
          else if((i+j)%2!=0 && a[i][j]=='.')
          {
              cout<<"W";
          }
           else
           {
               cout<<"-";
           }
       }
       cout<<endl;
   }

    return 0;
}

