#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,zp=0,op=0;
        cin>>n;
        string s,p;
        cin>>s;   cin>>p;
        if(s==p)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(lli i=0;i<n;i++)
            {
                 if(p[i]=='0')
                {
                    zp++;
                }
                if(p[i]=='1')
                {
                    op++;
                }
            }
            if( zp>=1 && op>=1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
        }
    }
    return 0;
}


