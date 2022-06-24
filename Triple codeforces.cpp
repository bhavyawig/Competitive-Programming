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
       map<lli,lli>m;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       lli x=0;
       for(auto &itr:m)
       {
           if(itr.second>=3 && x==0){
            cout<<itr.first<<endl;
            x++;
           }
       }
       if(x==0)
        cout<<-1<<endl;
   }

    return 0;
}

