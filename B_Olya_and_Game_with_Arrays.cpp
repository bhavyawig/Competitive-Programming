#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   for(lli e=0;e<n;e++)
   {
    lli w; cin>>w;
    vector<vector<lli>> vec;
    lli mini=INT_MAX;
    for(lli i=0;i<w;i++)
    {
        lli si; cin>>si;
        vector<lli> temp;
        for(lli j=0;j<si;j++)
        {
            lli o; cin>>o;
            temp.push_back(o);
            mini=min(mini,o);
        }
        sort(temp.begin(),temp.end());
        vec.push_back(temp);
    }
   lli sum=0;
   for(int i=0;i<vec.size();i++)
   sum+=vec[i][1];
   lli y=INT_MAX;
      for(int i=0;i<vec.size();i++)
{
    y=min(y,vec[i][1]);
}
cout<<mini+sum-y<<endl; 
   }
    return 0;
}