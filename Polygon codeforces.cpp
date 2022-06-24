#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
        lli z=0;
       lli a[n][n];
      // cout<<"here"<<endl;
       lli h=0;
       for(lli i=0;i<n;i++)
       {
           string s;
           cin>>s;
           h=0;
           for(lli j=0;j<n;j++)
           {
               a[i][j]=int(s[h])-48;
               h++;
           }
       }
       /*
       for(lli i=0;i<n;i++)
       {
           for(lli j=0;j<n;j++)
           {
               cout<<a[i][j];
           }
           cout<<endl;
       }*/
        for(lli i=0;i<n;i++)
       {
           for(lli j=0;j<n;j++)
           {
               if(a[i][j]==1 && j!=n-1 && i!=n-1)
               {
                   if(a[i][j+1]==1 || a[i+1][j]==1)
                   {
                       continue;
                   }
                   else
                   {
                       z++;
                   }
               }
           }
       }
       if(z==0)
       {
          cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }

    return 0;
}

