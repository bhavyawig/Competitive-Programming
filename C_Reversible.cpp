#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    map<string,lli> m;
    vector<string> vec;
    for(lli i=0;i<n;i++)
    {
        string s; cin>>s;
        vec.push_back(s);
        m[s]++;
    }
    lli ans=0;
    for(lli i=0;i<vec.size();i++)
    {
        string temp=vec[i];
        string rev=temp;
        reverse(rev.begin(),rev.end());
        if(m[temp]>=1 && m.find(rev)!=m.end())
        {
            m[rev]=0;
            m[temp]=0;
            ans++;
        }
        else if(m[temp]>=1)
        {
            m[temp]=0;
            ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}