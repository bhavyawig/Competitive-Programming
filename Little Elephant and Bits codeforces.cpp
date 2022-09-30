#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string a;
    cin>>a;
    lli len=a.length();
    lli zero=0,cnt=0;
    for(lli i=0; i<len; i++)
    {
        if(a[i]=='0')
            zero++;
    }
    if(zero==0)
    {
        for(lli i=1; i<len; i++)
            cout<<a[i];
    }
    else
    {
        for(lli i=0; i<len; i++)
        {
            if(a[i]=='0' && cnt==0)
            {
                cnt++;
            }
            else
                cout<<a[i];
        }
    }

    return 0;
}


