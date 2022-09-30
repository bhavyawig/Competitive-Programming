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
       vector<lli> vec;
       for(lli i=0;i<n;i++)
       {
           lli g;
           cin>>g;
           vec.push_back(g);
       }
       sort(vec.begin(),vec.end(),greater<lli>());
       for(auto itr:vec)
        cout<<itr<<" ";
       cout<<endl;
   }

    return 0;
}


