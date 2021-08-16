#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,count=0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]<38)
        {
            cout<<arr[i]<<endl;
        }
        else
        {
        if(arr[i]%5==0)
        {
            cout<<arr[i]<<endl;
        }
        else if(arr[i]%5!=0)
        {
            for(int j=1;j<3;j++)
            {
                if((arr[i]+j)%5==0)
                {
                    cout<<arr[i]+j<<endl;
                    count++;
                }
            }
            if(count==0)
            {
                cout<<arr[i]<<endl;
            }
        }
        count=0;
        }
    }
    return 0;
}
