#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0,count1=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j=j+2)
        {
            if(a[j]%2!=0)
            {
                count++;
            }
        }
        for(int j=1;j<n;j=j+2)
        {
            if(a[j]%2==0)
            {
                count1++;
            }
        }
        if(count==count1)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }


    return 0;
}

