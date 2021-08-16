#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout<<"enter size of array";
    cin>>m;
    int a[m];
    int i;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }

        int n;
    cout<<"enter no to find";
    cin>>n;
     for(i=0;i<m;i++)
    {
        if(a[i]==n)
        {
            cout<<i+1;
        }
    }
    return 0;
}
