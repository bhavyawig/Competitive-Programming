#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,s;
       cin>>a>>s;
       if((s*s)>=(4*a)){
       lli d=sqrt((s*s)-(4*a));
       lli ans=((s+d)/2);
              lli ans1=((s-d)/2);
        lli x1=s-(ans);
        lli x2=s-ans1;
        if(ans>0 && x1>0 && ans+x1==s && ans&x1==a && d>0)
        {
            cout<<"Yes"<<endl;
        }
        else if(ans1>0 && x2>0 && ans1+x2==s && ans1&x2==a && d>0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
       }
       else
       {
            cout<<"No"<<endl;
       }
   }

    return 0;
}
