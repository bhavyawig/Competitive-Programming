#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> a;
   map<lli,lli> m;
   lli count1=0;
   for(lli i=0;i<n;i++)
   {
       lli x;
       cin>>x;
       a.push_back(x);
   }
   sort(a.begin(),a.end());
   for(lli i=0;i<n;i++)
   {
       m[a[i]]++;
   }
   vector< pair<lli,lli>> p;
   for(auto &it:m)
   {
       p.push_back(make_pair(it.second,it.first));
   }
   sort(p.begin(),p.end());
   for(auto &it:p)
   {
       cout<<it.first<<" "<<it.second<<endl;
   }
   vector<lli>::iterator itr,itr2,itr3;
   for(lli it=n-1;it>=0;it--)
   {
       lli node=p[it].second;
     // p.erase(remove(p.begin(), p.end(), node), p.end());
       itr=remove(p.begin(),p.end(),node+1);
      // remove(p.begin(),p.end(),node-1);
       count1=count1+node;

   }
    cout<<count1<<endl;

    return 0;
}

