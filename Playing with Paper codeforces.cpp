#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a,b;
   cin>>a>>b;
   lli ans=0;
   while(a>0 && b>0)
   {
       if(a>=b)
       {
           ans+=(a/b);
           a=a%b;
       }
       else

       {
           ans+=(b/a);
           b=b%a;
       }
   }
   cout<<ans;

    return 0;
}


