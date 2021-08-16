#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0;
        cin>>n;
        float a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(((a[j]-a[k])/a[j])<((a[j]-a[k])/a[k]))
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
