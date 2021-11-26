#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli a[n],sum=0,ans=0;
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    lli low=0,high= sum/k + 2;
    while(high-low> 1)
    {
        lli p=(low+high)/2;
        ans=0;
        for(lli i=0; i<n; i++)
        {
            ans+=min(a[i],p);
        }
        if(ans>=k*p)
        {
            low=p;
        }
        else
        {
            high=p;
        }
       // cout<<"ans = "<<low<<"\n";
    }
    cout<<low<<endl;
    return 0;
}

