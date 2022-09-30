#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   char a[4][4];
   for(lli i=0;i<4;i++)
   {
       for(lli j=0;j<4;j++)
       {
           cin>>a[i][j];
       }
   }
   map<int,int> m;
   int x=0;
      for(lli i=0;i<4;i++)
   {
       for(lli j=0;j<4;j++)
       {
           if(i+1<4 && j+1<4)
           {
               m[0]=0;m[1]=0;
               if(a[i][j]=='#')
                m[0]++;
               else
                m[1]++;

               if(a[i][j+1]=='#')
                m[0]++;
               else
                m[1]++;

                if(a[i+1][j]=='#')
                m[0]++;
               else
                m[1]++;

                if(a[i+1][j+1]=='#')
                m[0]++;
               else
                m[1]++;

                if(m[0]==3 || m[0]==4 || m[1]==3 || m[1]==4)
                    x++;
           }
       }
   }
   if(x==0)
    cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;

    return 0;
}


