#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s1,s2,s3;
    string t;
    cin>>s1;   cin>>s2;   cin>>s3;
    cin>>t;
    lli l=t.length();
    for(lli i=0;i<l;i++)
    {
        if(t[i]=='1')
        {
            cout<<s1;
        }
        if(t[i]=='2')
        {
            cout<<s2;
        }
        if(t[i]=='3')
        {
            cout<<s3;
        }
    }
    return 0;
}


