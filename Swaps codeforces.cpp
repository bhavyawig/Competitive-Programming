#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,z=0,p=0;
        cin>>n;
        lli a[n],b[n];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];   cin>>b[i];
        }
        for(lli i=0;i<n;i++)
        {
            if(a[i]<b[i] && z==0)
            {
                p=i;
                z++;
            }
        }
        if(p==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<p+1<<endl;
        }

    }

    return 0;
}


