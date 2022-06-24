#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,k;
       cin>>a>>k;
       lli f=a;
       lli s=(k-1)*a;
       string d=to_string(s);
       lli min=0,max=0;
       for(lli i=0;i<d.length();i++)
       {
           int g=int(d[i]);
           if(max<=g)
            max=g;
           if(min>=g)
            min=g;
       }
       lli ans=((k-1)*a )+(k-1)*min*max;
       cout<<ans<<endl;
   }

    return 0;
}
