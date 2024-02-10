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
        lli a[n];
        lli sum=0,mini=INT_MAX,neg=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                neg++;
                a[i]=(-1)*a[i];
            }
            sum+=a[i];
            mini=min(mini,a[i]);
        }
       // cout<<sum<<" ";
        if(neg%2!=0)
        {
            sum-=mini;
            sum-=mini;
        }
       cout<<sum<<endl;
    }   
}
