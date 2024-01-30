#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    char ans;
    int maxi=0;

    for(auto itr: m)
    {
        if(itr.second>maxi)
        {
            maxi=itr.second;
            ans=itr.first;
        }
    }
    cout<<ans;
}