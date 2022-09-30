#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> vec;
   for(int i=0;i<n;i++)
   {
       lli g;
       cin>>g;
       vec.push_back(g);
   }
   sort(vec.begin(),vec.end());
   map<lli,lli> mp;
   for(int i=0;i<n;i++)
    mp[vec[i]]++;
    lli maxi=0;
   for(auto itr:mp)
   {
       if(maxi<itr.second)
       {
           maxi=itr.second;
       }
   }
   cout<<n-maxi<<endl;

    return 0;
}


