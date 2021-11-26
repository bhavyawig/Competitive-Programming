
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
    set<lli> s;
    lli sum=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       s.insert(a[i]);
       sum=sum+a[i];
   }
   if(s.size()==n)
   {
       cout<<sum<<endl;
   }
   else
   {
       lli l=n-s.size();
       cout<<sum-l<<endl;
   }


    return 0;
}
