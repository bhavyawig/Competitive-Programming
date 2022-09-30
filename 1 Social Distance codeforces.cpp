#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m;
       cin>>n>>m;
       vector<lli> vec;
       for(int i=0;i<n;i++)
       {
           lli g;
           cin>>g;
           vec.push_back(g);
       }
       lli count=0;
       sort(vec.begin(),vec.end(),greater<lli>());
       count+=(vec[0]*2);
       for(int i=1;i<n-1;i++)
       {
           count+=vec[i];
       }
       count+=n;
       if(count<=m)
        cout<<"yes"<<endl;
       else
        cout<<"no"<<endl;
   }

    return 0;
}


