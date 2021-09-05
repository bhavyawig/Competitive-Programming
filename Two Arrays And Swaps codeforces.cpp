#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,sum=0;
        cin>>n;cin>>k;
        int a[n],b[n],c=0,m=n-1;
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
        for(int e=0;e<k;e++)
        {
            if(b[m]>a[c]){
            a[c]=b[m];
            c++;
            m--;}
        }
         for(int j=0;j<n;j++)
        {
            sum=sum+a[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
