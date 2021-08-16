#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,cnt1=0,cnt0=0;
    multiset<int> str;
    for(i=0;i<n;i++)
    {
        str.insert(s[i]);
        if(s[i]=='1')
        {
            cnt1++;
        }
        if(s[i]=='0')
        {
            cnt0++;
        }
    }
    if(cnt1==cnt0)
    {
        cout<<"0";
    }
    else if(cnt0>cnt1)
    {
        cout<<cnt0-cnt1;
    }
    else if(cnt1>cnt0)
    {
        cout<<cnt1-cnt0;
    }
    return 0;
}
