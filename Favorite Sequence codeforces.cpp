#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j;
    for(j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int i,p=0,w=n-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(i=0;i<n;i=i+2)
        {
            b[i]=a[p];
            p++;
        }
        for(i=1;i<n;i=i+2)
        {
            b[i]=a[w];
            w--;
        }
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }

     cout<<endl;




    }
    return 0;
}
