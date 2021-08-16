#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],cpy[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cpy[i]=a[i];
    }
    int q=sizeof(cpy)/sizeof(cpy[0]);
    sort(cpy,cpy+q);
    int z=cpy[n-2];
    for(int i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            cout<<i+1<<endl;
        }
    }
    return 0;
}

