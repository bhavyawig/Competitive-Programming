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
       lli a[n],b[n];
       lli z=0;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           b[i]=a[i];
       }
       sort(a,a+n);
       for(lli i=0;i<n;i++)
       {
           if(a[i]!=b[i])
           {
               z++;
           }
       }
       if(z==0)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
   }

    return 0;
}

