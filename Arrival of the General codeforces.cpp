#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,max,min,swap,p=0,q=0;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            p=i;
        }
        if(min>=a[i])
        {
            min=a[i];
            q=i;
        }
    }
    //cout<<q<<p;
    if(p>q)
    {
         cout<<p+n-2-q;
    }
    else{
    cout<<p+n-1-q;
    }
    return 0;
}
