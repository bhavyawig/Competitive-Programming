#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int n,m,sum=0;
        long long int x,y;
        cin>>n;
        cin>>m;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=0;
        }
        for(int z=0;z<m;z++)
        {
            cin>>x;cin>>y;
            for(int i=1;i<=n;i++)
            {
                if(i%y!=0 && a[i-1]==0)
                {
                    a[i-1]=x;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

