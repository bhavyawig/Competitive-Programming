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
        lli sum=0;
        lli a[n];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        map<lli,lli> m;
        for(int i=0;i<n-1;i++)
        {
            m[a[i]]+=i;

            if(a[i]==a[i+1])
            {
                sum+=m[a[i]];
            }
        }
        cout<<sum<<endl;
    }
}