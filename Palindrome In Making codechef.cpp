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
       lli vis[n]={0};
       lli shuru=0,antt=n-1;
       while(shuru<antt)
       {
           if(a[shuru]<a[antt])
           {
               vis[shuru]=a[antt]-a[shuru];
               vis[ant]=0;
           }
           else if(a[antt]<a[shuru])
           {
               vis[shuru]=0;
               vis[antt]=a[shuru]-a[antt];
           }
               shuru++;
               antt--;
       }
       lli count=0,maxi=0;
        for(lli i=0;i<n;i++)
       {
           if(vis[i]==0)
           {
               count+=maxi;
               maxi=0;
           }
           else{
            maxi=max(maxi,vis[i]);
           }
       }
       count+=maxi;
       cout<<count<<endl;
   }

    return 0;
}


