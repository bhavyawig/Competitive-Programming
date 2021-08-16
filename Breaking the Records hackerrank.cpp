#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    int countmax=0,countmin=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int  max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            countmax++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            countmin++;
        }
    }
    cout<<countmax<<" "<<countmin;
    return 0;
}
