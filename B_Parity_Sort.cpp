#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++){
    lli n;
    cin>>n;
    lli cnt=0;
    lli a[n],b[n];
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(lli i=0;i<n;i++)
    {
        if(a[i]%2==0 && b[i]%2==0)
        continue;
        else if(a[i]%2!=0 && b[i]%2!=0)
        continue;
        else
        cnt++;
    }
    if(cnt>=1) cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    }
    return 0;
}