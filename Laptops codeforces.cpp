#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<pair<lli,lli>> a;
   for(lli i=0;i<n;i++)
   {
       lli x,y;
       cin>>x>>y;
       a.push_back(make_pair(x,y));
   }
   sort(a.begin(),a.end());
   lli x=0;
   for(lli i=1;i<n;i++)
   {
       if(a[i-1].first<a[i].first && a[i-1].second>a[i].second)
        x++;
   }
   if(x>0)
    cout<<"Happy Alex";
   else
    cout<<"Poor Alex";


    return 0;
}

