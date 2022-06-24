#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   lli a[n],sum=0,store=0;
   for(lli i=0;i<n;i++)
    cin>>a[i];

    for(lli i=0;i<k;i++)
        sum+=a[i];

    lli ans=sum,w=0;
    for(lli i=k;i<n;i++)
    {
        sum-=a[w];
        sum+=a[i];
        if(ans>sum)
        {
            ans=sum;
            store=w+1;
        }
        w++;
    }
    cout<<store+1<<endl;

    return 0;
}

