
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,b=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int q=sizeof(a)/sizeof(a[0]);
    sort(a,a+q);
    for(int i=n-1;i>=0;i--)
    {
        b=b+a[i];
        sum=sum-a[i];
        if(sum<b)
        {
            cout<<count+1;
            exit(0);
        }
        count++;
    }

    return 0;
}
