#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,x=0,count;
        cin>>n;
        lli a[n],ans=INT_MAX;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                x++;
            }
        }
        if(x>=1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            for(lli i=0;i<n;i++)
        {
            count=0;
            while(a[i]%2==0)
            {
                a[i]=a[i]/2;
                count++;
            }
            ans=min(count,ans);
        }
        cout<<ans<<endl;
    }
    }

    return 0;
}
