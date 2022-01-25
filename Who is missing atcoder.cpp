#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[(4*n)-1];
   for(lli i=0;i<(4*n)-1;i++)
   {
       cin>>a[i];
   }
   map<lli,lli> m;
   for(lli i=0;i<(4*n)-1;i++)
   {
       m[a[i]]++;
   }
   for(auto &itr:m)
   {
       if(itr.second<4)
       {
           cout<<itr.first<<endl;
       }
   }

    return 0;
}

