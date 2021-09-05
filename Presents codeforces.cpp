#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        arr[a[i]]=i+1;
    }
     for(int i=1;i<=n;i++)
     {
         cout<<arr[i]<<" ";
     }
    return 0;
}
