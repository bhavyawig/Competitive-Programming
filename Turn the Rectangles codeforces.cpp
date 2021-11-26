#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<pair<lli,lli>> v;
   lli z=0;
   for(lli i=0;i<n;i++)
   {
       lli x,y;
       cin>>x>>y;
       v.push_back(make_pair(x,y));
   }
   lli k=max(v[0].first,v[0].second);
   for(lli i=1;i<n;i++)
   {
       lli w=max(v[i].first,v[i].second);
       lli q=min(v[i].first,v[i].second);
       if(w<=k)
       {
         k=w;
       }
       else if(q<=k)
       {
           k=q;
       }
       else
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

    return 0;
}

