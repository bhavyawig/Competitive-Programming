#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m;
       cin>>n>>m;
       lli min;
       if(n<m)
       {
           min=(2*n)+(3*(m-n));
           cout<<min<<endl;
           for(lli i=0;i<2*n;i++)
           {
               if(i%2==0)
               {
                   cout<<"1";
               }
               else
               {
                   cout<<"0";
               }
           }
           for(lli i=0;i<m-n;i++)
           {
               cout<<"110";
           }
           cout<<endl;
       }
       else if(n==m)
       {
           min=(m+1)+(n+1);
           cout<<min<<endl;
           for(lli i=0;i<min;i++)
           {
               if(i%2==0)
               {
                   cout<<"0";
               }
               else
               {
                   cout<<"1";
               }
           }
           cout<<endl;
       }
       else
       {
            min=(2*m)+(3*(n-m));
           cout<<min<<endl;
           for(lli i=0;i<2*m;i++)
           {
               if(i%2!=0)
               {
                   cout<<"1";
               }
               else
               {
                   cout<<"0";
               }
           }
            for(lli i=0;i<n-m;i++)
           {
               cout<<"001";
           }
           cout<<endl;
       }

   }

    return 0;
}

