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
        int a[2*n],arr[n];
        int b[52];
        for(int i=0;i<52;i++)
        {
            b[i]=0;
        }
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(b[a[i]]==0)
            {
                b[a[i]]++;
                arr[k]=a[i];
                k++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
