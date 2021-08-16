
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,max,min,swap;
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
        }
        if(min<a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++){
    if(a[0]==max && a[n-1]==min )
    {
        cout<<count;
    }
    else{
        a[i]=swap;
        a[i]=a[i+1];
        a[i+1]=swap;
        count++;
        i++;

    }
    }
    return 0;
}
