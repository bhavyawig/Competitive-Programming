#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
     lli t1,t2,r1,r2;
     cin>>t1>>t2>>r1>>r2;
     double a=((double)t1*t1)/(r1*r1*r1);
     double b=((double)t2*t2)/(r2*r2*r2);
     if(a==b)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
   }

    return 0;
}

