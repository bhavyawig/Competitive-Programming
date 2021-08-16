#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n;cin>>k;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int next=a[k-1];
    for(i=0;i<n;i++)
    {
        if(a[i]>=next && a[i]>0)
        {
            count++;
        }
    }
    cout<<count;


    return 0;
}

