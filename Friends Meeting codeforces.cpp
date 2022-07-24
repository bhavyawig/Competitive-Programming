#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a,b;
   cin>>a>>b;
   lli ans=abs(a-b);
   if(ans%2==0)
   {
       ans=ans/2;
       lli sum=(ans*(ans+1))/2;
       cout<<2*sum;
   }
   else
   {
       ans=ans/2;
       lli ans2=ans+1;
       lli sum1=(ans*(ans+1))/2;
       lli sum2=(ans2*(ans2+1))/2;
       cout<<sum1+sum2;
   }
    return 0;
}

