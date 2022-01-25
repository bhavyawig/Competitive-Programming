#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       lli ed=n-1;
       lli edd=n-2;
       for(lli i=1;i<k;i++)
       {
           if(((i+2)%3)==0)
           {
               edd--;
           }
           else if((i+1)%3==0)
           {
               edd--;
               ed++;
           }
           else
           {
               edd=edd-2;
               ed=ed+2;
           }
       }
       for(lli i=0;i<n;i++)
       {
           if(i==edd || i==ed)
           {
               cout<<"b";
           }
           else
           {
               cout<<"a";
           }
       }
       cout<<endl;
   }

    return 0;
}

