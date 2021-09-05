#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,no,swapno;
        cin>>n;
        int a[n+1];
        a[0]=0;
        for(int i=1;i<n+1;i++)
        {
            a[i]=i;
        }
       // cout<<a[n];
        for(int i=1;i<n;i++)
        {
            no=a[i];
            a[i]=a[i+1];
            a[i+1]=no;
            i++;
        }
        if(n%2==0)
        {
             for(int i=1;i<n+1;i++)
             {
                 cout<<a[i]<<" ";
             }
             cout<<endl;
        }
        else
        {
            swapno=a[n-1];
          //  cout<<a[n-1]<<"bbbbbb"<<a[n];
            a[n-1]=a[n];
            a[n]=swapno;
            for(int i=1;i<n+1;i++)
             {
                 cout<<a[i]<<" ";
             }
             cout<<endl;
        }
    }
    return 0;
}

