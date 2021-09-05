#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,k,p=0,sum=0;
        cin>>n;    cin>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int q=sizeof(a)/sizeof(a[0]);
        sort(a,a+q);
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && p<k)
            {
                a[i]=a[i]*(-1);
                p++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0){
           sum=sum+a[i];
            }
        }
        if(sum<=0)
        {
            cout<<"0"<<endl;
        }
        else
        {
                cout<<sum<<endl;
        }
    }
    return 0;
}


