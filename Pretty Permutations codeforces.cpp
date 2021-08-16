#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    for(int j=0;j<t;j++){
    cin>>n;
    int p=1,a[n],swap,swap1;
    for(int i=0;i<n;i++)
    {
        a[i]=p;
        p++;

    }
    if(n%2==0){
    for(int i=0;i<n;i=i+2)
    {
        swap=a[i];
        a[i]=a[i+1];
        a[i+1]=swap;

    }}
    else{
       for(int i=0;i<n;i=i+2)
    {
        if(i==n-1)
        {
            swap1=a[i];
            a[i]=a[i-1];
            a[i-1]=swap1;
        }
        else
        {
        swap=a[i];
        a[i]=a[i+1];
        a[i+1]=swap;
        }
    }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    }


    return 0;
}

