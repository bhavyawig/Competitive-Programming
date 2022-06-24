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
       lli a[n],a1[n];
       lli one=0,count=0,zero=0;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           a1[i]=a[i];
       }
       lli b[n];
       for(lli i=0;i<n;i++)
       {
           cin>>b[i];
           if(b[i]==1)
           {
               one++;
           }
           else
           {
               zero++;
           }
       }
       lli q=sizeof(a1)/sizeof(a1[0]);
       sort(a1,a1+q);
       for(lli i=0;i<n;i++)
       {
           if(a[i]!=a1[i])
           {
               count++;
           }
       }
       if((one>=1 && zero>=1) || count==0)
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

