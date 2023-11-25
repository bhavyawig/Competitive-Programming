#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,l,r;
    cin>>n>>l>>r;
    lli a[n];
    for(int i=0;i<n;i++)
{
    cin>>a[i];
    lli fir=abs(a[i]-l);
    lli sec=abs(a[i]-r);
    if(a[i]>=l && a[i]<=r)
    cout<<a[i]<<" ";
   else if(fir<=sec)
    {
        cout<<l<<" ";
    }
    else
    cout<<r<<" ";
}
}