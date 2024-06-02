#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    map<lli,lli> m;
    for(int i=0;i<n;i++)
    {
        lli a,c;
        cin>>a>>c;
        if(m.find(c)!=m.end()){
        lli no=m[c];
        m[c]=min(no,a);
        }
        else
        m[c]=a;
    }

    lli ans=INT_MIN;
    for(auto itr: m)
    {
        ans=max(ans,itr.second);
    }
    cout<<ans;
}