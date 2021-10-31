#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,k,count=0,sum=0;
    cin>>n;    cin>>k;
    lli a[n];
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(lli i=1;i<n;i++)
    {
        if(a[i]+a[i-1]<k)
        {
            sum=a[i]+a[i-1];
            count=count+(k-sum);
            a[i]=a[i]+k-sum;
        }
    }
    cout<<count<<endl;
    for(lli i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
