#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,j=0,count=0;
    cin>>n;cin>>m;cin>>k;
    int a[n],x[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>x[i];
    }
    int e=sizeof(a)/sizeof(a[0]);
    sort(a,a+e);
    int r=sizeof(x)/sizeof(x[0]);
    sort(x,x+r);
    for(int i=0;i<n;i++)
    {
        if(a[i]<=x[j]+k && a[i]>=x[j]-k)
        {
            count++;
            j++;
        }
    }
    cout<<count<<endl;

    return 0;
}

