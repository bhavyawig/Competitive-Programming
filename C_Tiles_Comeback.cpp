#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++){
    lli n,k;
    cin>>n>>k;
    lli a[n];
    lli fir,lt;
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0) fir=a[i];
        if(i==n-1) lt=a[i];
    }
    if(fir==lt)
    {
        lli cnt=0;
        for(lli i=0;i<n;i++)
        {
            if(a[i]==fir) cnt++;
        }
        if(cnt>=k) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    {
        lli index=0,index1=0,uf=0,oh=0;
        for(lli i=0;i<n;i++)
        {
            if(a[i]==fir && uf<k)
            {
                index=i;
                uf++;
            }
        }
        for(lli i=n-1;i>=0;i--)
        {
            if(a[i]==lt && oh<k)
            {
                index1=i;
                oh++;
            }
        }
        if(index<index1 && uf==k && oh==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
    return 0;
}