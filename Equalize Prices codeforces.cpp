#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0; e<test; e++)
    {
        lli n,k;
        cin>>n>>k;
        lli a[n];
        for(lli i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        if(a[n-1]>=a[0]+k)
        {
            if(a[n-1]-k<=a[0]+k)
                cout<<a[0]+k<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            if(a[n-1]+k>=a[0]+k)
                cout<<a[0]+k<<endl;
            else
                cout<<-1<<endl;
        }
    }

    return 0;
}


