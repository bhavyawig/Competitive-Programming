
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,count=0;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int max=a[0];int min=a[0];
    for(i=0;i<n;i++)
    {
       if(min>a[i])
       {
           min=a[i];
           count++;
       }
       if(max<a[i])
       {
         max=a[i];
         count++;
       }

    }

    cout<<count;
    return 0;
}
