
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,count=0;
    cin>>n;
    cin>>h;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            count=count+2;
        }
        else
        {
            count++;
        }
    }
    cout<<count;

    return 0;
}
