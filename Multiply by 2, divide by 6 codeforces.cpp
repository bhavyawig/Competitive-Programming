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
       lli count=0;
       while(n>0 && n!=1)
       {
           if(n%6==0)
           {
               n=n/6;
               count++;
           }
           else
           {
               n=n*2;
               count++;
           }
       }
       if(n==1){
       cout<<count<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
   }

    return 0;
}

