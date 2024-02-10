#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool cmp(const pair<lli,lli> &a, const pair<lli,lli> &b)
{
    return a.first>b.first;
}
int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        vector<pair<lli,lli>> a,b,c;
        for(lli i=0;i<n;i++)
        {
            lli o; cin>>o;
            a.push_back({o,i});
        }
         for(lli i=0;i<n;i++)
        {
            lli o; cin>>o;
            b.push_back({o,i});
        }
         for(lli i=0;i<n;i++)
        {
            lli o; cin>>o;
            c.push_back({o,i});
        }
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end(),cmp);
        sort(c.begin(),c.end(),cmp);
        //   for(lli i=0;i<n;i++)
        //   cout<<b[i].first<<" "<<b[i].second<<endl;
        lli ans=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(a[i].second!=b[j].second && a[i].second!=c[k].second && c[k].second!=b[j].second)
                    {
                        ans=max(ans,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }   
}
