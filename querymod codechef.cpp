#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli arr[n];

   for(lli i=0;i<n;i++)
    cin>>arr[i];

   unordered_map<lli,lli> mp;
   for(lli i=0;i<n;i++)
    mp[arr[i]%m]++;

   lli q;
   cin>>q;
   for(lli i=0;i<q;i++)
   {
       lli type;
       cin>>type;
       if(type==1)
       {
        lli loc,val;
        cin>>loc>>val;
        mp[arr[loc-1]%m]--;
        arr[loc-1]=val;
        mp[arr[loc-1]%m]++;
       }
       else
       {
           lli kro;
           cin>>kro;
           cout<<mp[kro]<<endl;
       }
   }

    return 0;
}


