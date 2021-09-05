#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,k=0;
        cin>>n;
        int a[n],arr[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int q=sizeof(a)/sizeof(a[0]);
        sort(a,a+q);
        for(int i=1;i<n;i++)
        {
            arr[k]=a[i]-a[i-1];
            k++;
        }
        int mini=arr[0];
        for(int i=0;i<n-1;i++)
        {
            if(mini>arr[i])
            {
                mini=arr[i];
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}
