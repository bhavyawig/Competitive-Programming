#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x,m;
       cin>>x>>m;
       lli ans=(log(x)/log(2));
       if(ceil((log(x)/log(2)))==floor((log(x)/log(2))))
       {
           lli ans1=((log(x)/log(2))+1);
               if(m>=ans1)
               {
                   lli count=0;
                   m=m-ans1;
                   count++;
                   count=count+m;
                   cout<<count<<endl;
               }
               else
               {
                   cout<<"0"<<endl;
               }
       }
       else
       {
           lli cont=0;
           for(lli i=0;i<32;i++)
           {
               if((1<<i & x)==(1<<i) && x==i)
               {
                   cont=i;
               }
               else if((1<<i & x)==(1<<i) && x!=i)
               {
                   cont=i+1;
               }
           }
           cont++;
           if(cont<=m){
                cout<<m+1-cont<<endl;
           }
           else
           {
               cout<<"0"<<endl;
           }
       }
   }

    return 0;
}

