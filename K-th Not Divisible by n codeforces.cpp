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
       cin>>n>>k;//3 7
       lli ans=k/(n-1);
       lli ans1=ans+k;
       if(ans1%n==0)
       {
           ans1--;
           cout<<ans1<<endl;
       }
       else
       {
           cout<<ans1<<endl;
       }
   }

    return 0;
}

