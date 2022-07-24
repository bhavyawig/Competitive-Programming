#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli r,c;
   cin>>r>>c;
   char a[r][c];
   lli cnt=0;
   for(lli i=0;i<r;i++)
   {
       for(lli j=0;j<c;j++)
       {
           cin>>a[i][j];
       }
   }
   for(lli i=0;i<r;i++)
   {
       for(lli j=0;j<c;j++)
       {
           if(a[i][j]=='S')
           {
               if(i-1>=0)
               {
                   if(a[i-1][j]=='W')
                    cnt++;
               }
               if(i+1<r)
               {
                   if(a[i+1][j]=='W')
                    cnt++;
               }
               if(j-1>=0)
               {
                   if(a[i][j-1]=='W')
                    cnt++;
               }
               if(j+1<c)
               {
                   if(a[i][j+1]=='W')
                    cnt++;
               }
           }
       }
   }
   if(cnt>=1)
    cout<<"No";
   else
   {
       cout<<"Yes"<<endl;
        for(lli i=0;i<r;i++)
   {
       for(lli j=0;j<c;j++)
       {
           if(a[i][j]=='.')
            cout<<"D";
           else
           cout<<a[i][j];
       }
       cout<<endl;
   }
   }

    return 0;
}

