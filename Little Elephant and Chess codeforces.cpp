#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    char a[8][8];
    lli cnt=0;
    for(lli i=0; i<8; i++)
    {
        for(lli j=0; j<8; j++)
        {
            cin>>a[i][j];
        }
    }
    for(lli i=0; i<8; i++)
    {
        for(lli j=1; j<8; j++)
        {
            if(a[i][j]==a[i][j-1])
                cnt++;
        }
    }
    if(cnt==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}


