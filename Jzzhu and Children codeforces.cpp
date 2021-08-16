
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,max;
    cin>>n;
    cin>>m;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    if(max>=m)
    {
       for(i=0;i<n;i++)
          {
               if(a[i]==max)
               {
                   cout<<i+1;
               }
          }
    }
    else
    {
        cout<<n;
    }
    return 0;
}
