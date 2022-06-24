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
       cin>>n>>k;
       lli sum=(k-1)*(k-1);
       lli term=1+((k-2)*2);
       lli left=n-sum;
       if(left>0 && left%2!=0 && left>term)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

    return 0;
}

