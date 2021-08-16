
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,mur=0;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
       if(a[i]>0)
       {
           sum=sum+a[i];
       }
       if(a[i]==-1)
       {
           if(sum>0)
           {
               sum=sum-1;
           }
           else
           {
               mur++;
           }
       }
    }
    cout<<mur;

    return 0;
}
