#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,no;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[101];
        for(int i=0;i<101;i++)
        {
            b[i]=0;
        }
         for(int i=0;i<n;i++)
        {
            b[a[i]]++;
        }
        for(int i=0;i<101;i++)
        {
            if(b[i]==1)
            {
                no=i;
            }
        }
         for(int i=0;i<n;i++)
        {
            if(a[i]==no)
            {
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}

