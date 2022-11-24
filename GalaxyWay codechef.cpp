#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m,g;
       cin>>n>>m>>g;
       lli count=0;
       lli a[n];
       for(lli i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=m && a[i]%g==0)
            count++;
   }
   cout<<count<<endl;
   }

    return 0;
}


