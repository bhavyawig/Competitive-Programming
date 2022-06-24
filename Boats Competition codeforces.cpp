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
       lli a[n];
       lli count=0,counter=0;
       for(lli i=0;i<n;i++)
        cin>>a[i];

       sort(a,a+n);
       for(lli i=1;i<n;i++)
       {
           if(a[i]==a[i-1])
           {
               count++;
               i++;
           }
       }
       for(lli i=0;i<n/2;i++)
       {
           if(a[i]==a[n-i-1])
           {
               counter++;
               i++;
           }
       }
       cout<<max(counter,count)<<endl;
   }

    return 0;
}

