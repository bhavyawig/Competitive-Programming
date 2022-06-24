#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   vector<lli> a;
   for(lli i=0;i<n;i++)
   {
       lli samp;
       cin>>samp;
       a.push_back(samp);
   }
   vector<lli> b;
   for(lli i=0;i<m;i++)
   {
        lli sampw;
       cin>>sampw;
       b.push_back(sampw);
   }
   sort(a.begin(),a.end());
   vector<lli>::iterator itr;
   for(lli i=0;i<m;i++)
   {
       itr=upper_bound(a.begin(),a.end(),b[i]);
       cout<<(itr-a.begin())<<" ";
   }

    return 0;
}

