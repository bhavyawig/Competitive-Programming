#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
        lli n,count=0;
        cin>>n;
        lli a[n];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(lli i=1;i<n-1;i++)
        {
            if(a[i]==0 && a[i+1]==1 && a[i-1]==1)
            {
                count++;
                a[i+1]=0;
            }
        }
        cout<<count<<endl;
    return 0;
}
