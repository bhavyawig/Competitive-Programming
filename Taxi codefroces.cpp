#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    if(sum%4==0)
    {
        cout<<sum/4;
    }
    else{
        cout<<(sum/4)+1;
    }

    return 0;
}

