#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k1,k2;
       cin>>n>>k1>>k2;
       lli a1[k1],a2[k2];
       for(lli i=0;i<k1;i++)
       {
           cin>>a1[i];
       }
       for(lli i=0;i<k2;i++)
       {
           cin>>a2[i];
       }
       lli q=sizeof(a1)/sizeof(a1[0]);
       lli w=sizeof(a2)/sizeof(a2[0]);
       sort(a1,a1+q);
       sort(a2,a2+w);
       if(a1[k1-1]>a2[k2-1])
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

   }

    return 0;
}

