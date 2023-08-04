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
       lli maxi=INT_MIN,maxiind=0,miniind=0,mini=INT_MAX;
       for(lli i=0;i<n;i++)
       {
        lli o; cin>>o;
        a.push_back(o);
        if(o>maxi)
        {
            maxi=o;
            maxiind=i+1;
        }
        if(o<mini)
        {
            mini=o;
            miniind=i+1;
        }
       }
      vector<pair<lli, lli>> p;
      // for(lli i=0;i<n;i++)
      //cout<<a[i]<<" ";
      if(abs(maxi)>=abs(mini) && maxi>0)
      {
        // maxiind
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                a[i]+=maxi;
                p.push_back({i+1,maxiind});
            }
        }
        for(lli i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                a[i]+=a[i-1];
                p.push_back({i+1,i});
            }
        }
      }
      else
      {
        // miniid
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                a[i]+=mini;
                p.push_back({i+1,miniind});
            }
        }
        for(lli i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1])
            {
                a[i]+=a[i+1];
                p.push_back({i+1,i+2});
            }
        }
      }
       cout<<p.size()<<endl;
       for(auto itr : p)
       cout<<itr.first<<" "<<itr.second<<endl;
    }
    return 0;
}