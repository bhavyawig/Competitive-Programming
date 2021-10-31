#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,k;
        cin>>n;   cin>>k;
        lli a[n],swap=0;
        if(n-k!=1)
        {
            for(lli i=0;i<n;i++)
            {
                a[i]=i+1;
            }
            for(lli i=k;i<n-1;i++)
            {
                swap=a[i];
                a[i]=a[i+1];
                a[i+1]=swap;
            }
            for(lli i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }

    return 0;
}

