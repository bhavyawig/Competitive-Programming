#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   bool found=false;
   for(lli i=0;i<4;i++)
   {
       lli a,b,c,d;
       cin>>a>>b>>c>>d;
       if(found==false)
       {
           lli ans=min(a,b);
           lli ans2=min(c,d);
           if(ans+ans2<=n)
           {
               found=true;
               cout<<i+1<<" "<<ans<<" "<<n-ans;
           }
       }
   }
   if(found==false)
    cout<<-1;

    return 0;
}

