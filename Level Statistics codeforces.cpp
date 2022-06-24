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
       lli z=0;
       vector<pair<lli,lli>> a;
       for(lli i=0;i<n;i++)
       {
           lli p,c;
           cin>>p>>c;
           a.push_back(make_pair(p,c));
       }
     //  sort(a.begin(),a.end());
       if(a[0].first<a[0].second)
          {
              z++;
          }
      for(lli i=1;i<a.size();i++)
      {
          if(a[i].second<a[i-1].second)
          {
             z++;
          }
          if(a[i].first<a[i-1].first)
          {
             z++;
          }
          if(a[i].first==a[i-1].first && a[i].second!=a[i-1].second)
          {
              z++;
          }
          if(a[i].first<a[i].second)
          {
              z++;
          }
          if((a[i].second-a[i-1].second > a[i].first-a[i-1].first) && a[i].first>=a[i-1].first)
          {
              z++;
          }
      }
      if(z==0)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
   }

    return 0;
}

