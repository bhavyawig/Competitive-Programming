#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   map<lli,lli> m;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]!=0)
        m[a[i]]++;
   }
   lli x=0,cnt=0;
   for(auto &itr:m)
   {
       if(itr.second==2)
        cnt++;
       if(itr.second>=3)
        x++;
   }
   if(x==0)
    cout<<cnt<<endl;
   else
    cout<<-1;
    return 0;
}

