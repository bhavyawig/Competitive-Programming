#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]*a[j]>(2*n-1))
                {
                    break;
                }
                else if(a[i]*a[j]==i+j)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

