#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b,p,q;
       cin>>a>>b>>p>>q;
       if(a==p && b==q)
       {
           cout<<"0"<<endl;
       }
       else if(((a+b)%2==0 && (p+q)%2==0) || ((a+b)%2!=0 && (p+q)%2!=0))
       {
           cout<<"2"<<endl;
       }
       else
       {
           cout<<"1"<<endl;
       }
   }

    return 0;
}

