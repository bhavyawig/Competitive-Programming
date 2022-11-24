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
       for(lli i=0;i<n;i++)
        cin>>a[i];
       lli shuru=0,antt=n-1,count=0;
       while(shuru<antt)
       {
           if(a[shuru]<a[antt])
           {
               a[antt]=a[antt]-a[shuru];
               shuru++;
               count++;
           }
           else if(a[antt]<a[shuru])
           {
               a[shuru]=a[shuru]-a[antt];
               antt--;
               count++;
           }
           else
           {
               shuru++;
               antt--;
           }
       }
       cout<<count<<endl;
   }

    return 0;
}


