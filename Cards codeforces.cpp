#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   vector<lli> v,ne,v2;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       v.push_back(a[i]);
       v2.push_back(a[i]);
   }
   sort(v.begin(),v.end());
   for(lli i=0;i<n/2;i++)
   {
       ne.push_back(v[i]);
       ne.push_back(v[n-i-1]);
   }
  // for(lli i=0;i<ne.size();i++)
    //cout<<ne[i];
   lli d=0;
   for(lli i=0;i<ne.size();i++)
   {
       auto itr = find(v2.begin(),v2.end(),ne[i]);
       int first= itr-v2.begin();
       v2[first]=-1;
       cout<<first+1<<" ";
       if(d==0 )
        d++;
       else{
        d=0;
        cout<<endl;
       }
   }

    return 0;
}

