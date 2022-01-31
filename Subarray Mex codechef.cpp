#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k,x;
       cin>>n>>k>>x;
       if((n==x && k<=n-1 ) || (k==1 && x!=1) || (k<x) )
       {
           cout<<"-1"<<endl;
       }
       else
       {
           lli w=0;
           for(lli i=0;i<n;i++)
           {
               cout<<w<<" ";
               w++;
               if(w==x)
               {
                   w=0;
               }
           }
           cout<<endl;
       }
   }

    return 0;
}

