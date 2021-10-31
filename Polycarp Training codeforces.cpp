#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n],k=1,count=0;
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q=sizeof(a)/sizeof(a[0]);
    sort(a,a+q);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            count++;
            a[i]=0;
            k++;
        }
    }
    cout<<count;
    return 0;
}
