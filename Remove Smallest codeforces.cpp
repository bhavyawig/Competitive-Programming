#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,z=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int q=sizeof(a)/sizeof(a[0]);
        sort(a,a+q);
        // for(int j=0;j<n;j++)
       // {
       //     cout<<a[j];
       // }
        for(int j=1;j<n;j++)
        {
            if(a[j]-a[j-1]<=1)
            {
                  continue;
            }
            else{z++;}
        }
       // cout<<z<<endl;
        if(z>=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

