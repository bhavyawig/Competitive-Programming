#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,count=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            count=count+(a[i]-a[i+1]);
            a[i+1]=a[i];
        }
    }
    cout<<count;

    return 0;
}

