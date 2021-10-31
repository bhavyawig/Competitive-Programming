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
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
       }
       lli q;
       cin>>q;
       vector<pair<lli,lli>> v;
       for(lli i=0;i<q;i++)
       {
           lli x,y;
           cin>>x>>y;
           v.push_back(make_pair(y,x));
       }
       lli freq[2001];
       for(lli i=0;i<2001;i++)
       {
           freq[i]=0;
       }
       sort(v.begin(),v.end());
       for(lli i=0;i<q;i++)
       {
           while(v[i].first>=0)
           {
               for(lli j=0;i<n;j++)
               {
                   freq[a[i]+1]++;
               }
               v[i].first--;
           }
           v[i].first=freq[v[i].second+1];
       }
       for(lli i=0;i<q;i++)
       {
           cout<<v[i].first<<endl;
       }


   }

    return 0;
}
