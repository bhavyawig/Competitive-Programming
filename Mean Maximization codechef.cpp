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
       vector<lli> a;
       for(lli i=0;i<n;i++)
       {
           lli sample;
           cin>>sample;
           a.push_back(sample);
       }
       lli sum=0;
       sort(a.begin(),a.end());
       for(lli i=0;i<n-1;i++)
       {
           sum=sum+a[i];
       }
       double mean=(double)sum/(n-1);
       double ans=mean+a[n-1];
       cout<<fixed<<setprecision(6)<<ans<<endl;
   }

    return 0;
}
