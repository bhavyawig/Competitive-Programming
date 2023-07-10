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
       lli odd=0;
       for(lli i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0)
            odd++;
   }
   //cout<<"odd"<<odd<<endl;
   if(odd%2==0 && odd!=0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
   }

    return 0;
}


