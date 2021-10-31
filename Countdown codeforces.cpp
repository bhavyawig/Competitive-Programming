#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,sum=0,zero=0;
        cin>>n;
        string s;
        cin>>s;
        for(lli i=0;i<n;i++)
        {
            sum=sum+(s[i]-48);
        }
        for(lli i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
        }
        if(s[n-1]=='0')
        {
            sum=sum+(n-zero);
            //cout<<sum<<endl;
        }
        else
        {
            sum=sum+(n-1-zero);
        }
        cout<<sum<<endl;
    }
    return 0;
}


