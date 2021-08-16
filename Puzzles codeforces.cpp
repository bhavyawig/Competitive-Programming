#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,j=0;
    cin>>n;
    cin>>m;
    int f[m];
    for(int i=0;i<m;i++)
    {
        cin>>f[i];
    }
    int q=sizeof(f)/sizeof(f[0]);
    sort(f,f+q);
    int a[m];
    for(int i=0;i<=m-n;i++)
    {
        a[j]=f[i+n-1]-f[i];
        j++;
        p=j;

    }
   // for(int i=0;i<p;i++)
   // {
   //     cout<<a[i]<<endl;
   // }
    int min1=a[0];
    for(int i=0;i<p;i++)
    {
        if(a[i]<=min1)
        {
            min1=a[i];
        }
    }
    cout<<min1<<endl;
    return 0;
}

