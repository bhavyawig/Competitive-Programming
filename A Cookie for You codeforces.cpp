#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a, b, n, m;
       cin>>a>>b>>n>>m;
       if(a+b<m+n)
       {
           cout<<"no"<<endl;
       }
       else if(m>min(a,b))
       {
           cout<<"no"<<endl;
       }
       else
       {
           cout<<"yes"<<endl;
       }
   }

    return 0;
}

