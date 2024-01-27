#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s,t;
    cin>>s>>t;
    lli cnt=0;
    for(int i=0;i<=2;i++)
    {
        if(s[i]==t[i]) cnt++;
    }
    cout<<cnt<<endl;
}