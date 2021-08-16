
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,p=0;
    cin>>n;
    cin>>k;
    int div=n/2;
    if(k>=div)
    {
        for(int i=2;i<k;i=i+2)
        {
            int a;
            a=i;
        }
    }
    else
    {

    }
    for(int i=1;i<=n;i=i+2)
    {
        new1[p]=i;
        p++;
    }
    for(int i=2;i<=n;i=i+2)
    {
        new1[p]=i;
        p++;
    }
    cout<<new1[k-1];

    return 0;
}
