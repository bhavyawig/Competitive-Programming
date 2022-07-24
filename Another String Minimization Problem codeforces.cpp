#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0; e<test; e++)
    {
        lli n,m;
        cin>>n>>m;
        lli a[n];
        for(lli i=0; i<n; i++)
            cin>>a[i];
        string s;
        for(lli i=0; i<m; i++)
            s+='B';
        for(lli i=0; i<n; i++)
        {
            if(s[a[i]-1]=='B' && s[m-a[i]]=='B')
            {
                lli mini=min(a[i]-1,m-a[i]);

                s[mini]='A';
            }
            else if(s[a[i]-1]=='B')
            {
                s[a[i]-1]='A';
            }
            else if(s[m-a[i]]=='B')
            {
                s[m-a[i]]='A';
            }
        }
        for(lli i=0; i<m; i++)
            cout<<s[i];
        cout<<endl;
    }

    return 0;
}


