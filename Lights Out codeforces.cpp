#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a[3][3];
   for(lli i=0;i<3;i++)
       for(lli j=0;j<3;j++)
        cin>>a[i][j];
   lli b[3][3];
   for(lli i=0;i<3;i++)
       for(lli j=0;j<3;j++)
             b[i][j]=0;
  for(lli i=0;i<3;i++)
   {
       for(lli j=0;j<3;j++)
        {
                b[i][j]+=a[i][j];// i=0 , j=1
                if(i-1>=0 && j-1>=0)//upar hai and left
                {
                   // b[i][j]+=a[i-1][j-1];
                }
                if(j-1>=0)
                {
                    b[i][j]+=a[i][j-1];
                }
                if(i-1>=0)//exact upar
                {
                    b[i][j]+=a[i-1][j];
                }
                if(i-1>=0 && j+1<3)//upar nd right
                {
                   // b[i][j]+=a[i-1][j+1];
                }
                if(j+1<3)//right
                {
                        b[i][j]+=a[i][j+1];
                }
                if(i+1<3) //neeche
                {
                        b[i][j]+=a[i+1][j];
                }
                if(i+1<3 && j-1>=0)
                {
                     //   b[i][j]+=a[i+1][j-1];
                }
                if(i+1<3 && j+1<3 )
                {
                     //   b[i][j]+=a[i+1][j+1];
                }


        }
   }
   /*for(lli i=0;i<3;i++)
   {
       for(lli j=0;j<3;j++)
       {
           cout<<b[i][j];
       }
       cout<<endl;
   }
   cout<<endl;
   cout<<endl;*/
   for(lli i=0;i<3;i++){
       for(lli j=0;j<3;j++)
       {
           if(b[i][j]%2==0)
            cout<<1;
           else
            cout<<0;
       }
       cout<<endl;
   }

    return 0;
}

