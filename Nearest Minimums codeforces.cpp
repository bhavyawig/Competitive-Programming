#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    lli mini=a[0];
    vector<lli> ans;
    for(lli i=1; i<n; i++)
    {
        mini = min(mini,a[i]);
    }
    //cout<<mini;
    for(lli i=0; i<n; i++)
    {
        if(a[i]==mini)
            ans.push_back(i);
    }
    lli ans2=INT_MAX;
    for(lli i=1; i<ans.size(); i++)
    {
        ans2=min(ans2,ans[i]-ans[i-1]);
    }
    cout<<ans2<<endl;

    return 0;
}


