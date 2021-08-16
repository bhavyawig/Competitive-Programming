#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,j;
    cin>>n;
    char arr[n][n];
    int i;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j>=n-1)
            {
                arr[i][j]='#';
            }
            else{
                arr[i][j]=' ';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
