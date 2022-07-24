#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   vector<lli> v;
   map<lli,lli>m;
   for(lli i=0;i<n;i++)
    cin>>a[i];
   for(lli i=n-1;i>=0;i--)
   {
       m[a[i]]++;
       if(m[a[i]]==1)
       {
           v.push_back(a[i]);
       }
   }
   cout<<v.size()<<endl;
   for(lli i=v.size()-1;i>=0;i--)
    cout<<v[i]<<" ";

    return 0;
}
