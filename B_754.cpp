#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    lli no=753;
    lli ans=INT_MAX;
    for(int i=0;i<s.length()-2;i++)
    {
        string t;
        t+=s[i];
        t+=s[i+1];
        t+=s[i+2];
        int f=stoi(t);
        ans=min(ans,abs(f-no));
    }
    cout<<ans;
}