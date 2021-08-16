#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,m,x,x1=0,j=0,p,w;
        cin>>n;cin>>m;cin>>x;
        int a[n],newarr[n],net[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            newarr[i]=a[i];
        }
        int q=sizeof(newarr)/sizeof(newarr[0]);
        sort(newarr,newarr+q);
        for(int i=n;i>0;i--)
        {
           if(newarr[i]>=m)
           {
               net[j]=newarr[i];
               j++;
               x1++;  p=j;  w=i;
           }
        }
        if(x1>=x)
        {
            cout<<x1<<endl;
            for(int i=0;i<=p;i++)
            {
                 for(int h=0;h<n;h++)
                 {
                     if(net[i]==a[h])
                     {
                         cout<<h+1;
                     }
                 }
            }

        }
        if(x1<x)
        {
            while(x1!=x)
            {

            }
        }
    }


    return 0;
}

