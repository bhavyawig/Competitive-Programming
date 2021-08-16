#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int n,count=0,p=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            b[i]=2*a[i];
        }
        for(i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[k]==1){p++;}
                if(b[i]%a[k]==0 && a[k]!=1)
                {
                    count++;
                }
            }
        }
        cout<<count-n+p<<endl;


    }
    return 0;
}
