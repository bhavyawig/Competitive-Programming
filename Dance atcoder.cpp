#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
    lli n;
    cin>>n;
    lli cnt=97;
    for(lli i=0;i<n;i++)
    {
        cout<<char(cnt);
        if(cnt==122)
        {
         cnt=96;
        }
        cnt++;
    }
    cout<<endl;
   }

    return 0;
}

