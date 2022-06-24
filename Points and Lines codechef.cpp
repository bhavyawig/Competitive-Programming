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
       set<lli> one,two;
       for(lli i=0;i<n;i++)
       {
           lli x,y;
           cin>>x>>y;
           one.insert(x);
           two.insert(y);
       }
       lli ans=one.size()+two.size();
       cout<<ans<<endl;
   }

    return 0;
}

