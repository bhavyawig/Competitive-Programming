#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,sum=0;
        cin>>n;
        lli a[n],even=0,odd=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(n%2==0)
        {
            if(even>=n/2)
            {
                sum=sum+n/2;
            }
            else
            {
                sum=sum+even;
            }
            if(odd>=n/2)
            {
                sum=sum+n/2;
            }
            else
            {
                sum=sum+odd;
            }
        }
        else
        {
             if(odd>=n/2)
            {
                sum=sum+n/2;
            }
            else
            {
                sum=sum+odd;
            }
            if(even>=n/2+1)
            {
                sum=sum+(n/2)+1;
            }
            else
            {
                sum=sum+even;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}


