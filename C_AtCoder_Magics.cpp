#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli n;
    cin>>n;
    vector<pair<lli,pair<lli,lli>>> vec;
    for(int i=0;i<n;i++)
    {
        lli a,c;
        cin>>a>>c;
        vec.push_back({a,{c,i+1}});
    }
    sort(vec.begin(),vec.end());
    lli mini[n];
    mini[n-1]=vec[n-1].second.first;
    for(int i=n-2;i>=0;i--)
    {
        mini[i]=min(mini[i+1],vec[i].second.first);
    }
    vector<lli> ans;
    for(int i=0;i<n;i++)
    {
        if(vec[i].second.first<=mini[i])
        {
            ans.push_back(vec[i].second.second);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto itr: ans)
    {
        cout<<itr<<" ";
    }
    return 0;
}


