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
       if(n%4==0)
       {
           for(lli i=0;i<n-(n/4);i++)
           {
               cout<<"9";
           }
           for(lli i=0;i<(n/4);i++)
           {
               cout<<"8";
           }
           cout<<endl;
       }
       else
       {
           for(lli i=0;i<n-((n/4)+1);i++)
           {
               cout<<"9";
           }
           for(lli i=0;i<((n/4)+1);i++)
           {
               cout<<"8";
           }
           cout<<endl;
       }
   }

    return 0;
}

