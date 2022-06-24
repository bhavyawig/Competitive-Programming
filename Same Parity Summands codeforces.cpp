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
       if(k>n)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           lli odd=(k-1);
           lli even=2*(k-1);
           if((n-odd)%2!=0)
           {
               cout<<"YES"<<endl;
               for(lli i=0;i<k-1;i++)
               {
                   cout<<"1 ";
               }
               cout<<(n-odd)<<endl;
           }
           else if((n-even)%2==0 && (n-even)>0)
           {
               cout<<"YES"<<endl;
               for(lli i=0;i<k-1;i++)
               {
                   cout<<"2 ";
               }
               cout<<(n-even)<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }

       }
   }

   return 0;
}
