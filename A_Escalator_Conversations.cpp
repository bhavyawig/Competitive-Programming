#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++){
    lli n,m,k,h;
    cin>>n>>m>>k>>h;
    lli cnt=0;
    for(lli i=0;i<n;i++)
    {
        lli a;
        cin>>a;
        lli diff=abs(h-a);
        if(diff%k==0)
        {
            lli oh=diff/k;
            if(oh<=m-1 && oh!=0)
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}