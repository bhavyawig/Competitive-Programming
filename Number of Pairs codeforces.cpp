#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,l,r;
       cin>>n>>l>>r;
       vector<lli> a;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
       }
       lli sum=0;
       sort(a.begin(),a.end());
       for(lli i=0;i<n;i++)
       {
           auto low=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
           auto high=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
           sum=sum+(high-low);
       }
       cout<<sum<<endl;
   }

    return 0;
}
