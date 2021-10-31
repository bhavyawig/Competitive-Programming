#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli arr[n][n],arr2[n][n];
    for(lli i=0;i<n;i++)
    {
        for(lli j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(lli i=0;i<n;i++)
    {
        for(lli j=0;j<n;j++)
        {
            arr2[i][j]=arr[j][i];
        }
    }
     for(lli i=0;i<n;i++)
    {
        for(lli j=0;j<n;j++)
        {
            cout<<arr2[i][j];
        }
    }

    return 0;
}

