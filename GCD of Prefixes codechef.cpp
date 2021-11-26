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
       lli b[n];
       for(lli i=0;i<n;i++)
       {
           cin>>b[i];
       }
       lli z=0;
       for(lli i=1;i<n;i++)
       {
           if(b[i-1]%b[i]!=0)
           {
               z++;
           }
       }
       if(z==0)
       {
            for(lli i=0;i<n;i++)
       {
           cout<<b[i]<<" ";
       }
       cout<<endl;
       }
       else
       {
           cout<<"-1"<<endl;
       }

   }

    return 0;
}
