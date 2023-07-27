#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n;
        cin>>n;
        lli a[n];
        lli sum=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        for(lli i=0;i<n;i++)
        {
            cout<<sum<<" ";
            sum-=a[i];
        }
        cout<<endl;
    }
    return 0;
}