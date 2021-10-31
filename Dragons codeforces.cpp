#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli s,n;
    cin>>s;   cin>>n;
    vector<pair<lli,lli>> v;
    lli a,b;
    for(lli i=0;i<n;i++)
    {
        cin>>a; cin>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    bool ans;
    ans=true;
    for(lli i=0;i<n;i++)
    {
        if(s<=v[i].first)
        {
            ans=false;
            break;
        }
        else
        {
            s+=v[i].second;
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
