#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    vector<lli> q,a,b;
    for(lli i=0;i<n;i++)
    {
        lli uf; cin>>uf;
        q.push_back(uf);
    }
     for(lli i=0;i<n;i++)
    {
        lli uf1; cin>>uf1;
        a.push_back(uf1);
    }
     for(lli i=0;i<n;i++)
    {
        lli uf22; cin>>uf22;
        b.push_back(uf22);
    }
    lli max_a=INT_MAX,max_b=INT_MAX;
     for(lli i=0;i<n;i++)
    {
        if(a[i]>0)
       max_a=min(max_a,q[i]/a[i]);
    }
    lli ans=0;
    for(lli i=0;i<=max_a;i++)
    {
        lli posa=i;
        vector<lli> temp(q.begin(),q.end());
        for(int j=0;j<n;j++)
        {
            temp[j]-=(a[j]*posa);
        }
        lli posb=INT_MAX;
          for(lli i1=0;i1<n;i1++)
    {
        if(b[i1]>0)
       posb=min(posb,temp[i1]/b[i1]);
    }
  if(posb==INT_MAX) posb=0;
    ans=max(ans,posa+posb);
    }
    cout<<ans;
}