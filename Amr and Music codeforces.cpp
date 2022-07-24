#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli a;
    vector<lli> v,ans,lo;
    for(lli i=0; i<n; i++)
    {
        cin>>a;
        lo.push_back(a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(lli i=0; i<n; i++)
    {
        if(v[i]<=k && k>0)
        {
            k=k-v[i];
            if(k<0)
                k=k+v[i];
            else
            {
                auto it = find(lo.begin(), lo.end(), v[i]);
                ans.push_back(it-lo.begin()+1);
                lo[it-lo.begin()]=0;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto itr: ans)
        cout<<itr<<" ";

    return 0;
}


