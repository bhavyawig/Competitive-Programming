
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n;cin>>k;
        int a[n],b[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        int q=sizeof(a)/sizeof(a[0]);
        sort(a,a+q);
        int r=sizeof(b)/sizeof(b[0]);
        sort(b,b+r);
        for(int j=0;j<n;j++)
        {
            suma=suma+a[j];
            sumb=sumb+b[j];
        }
        if(suma>=sumb)
        {

        }
    }


    return 0;
}
