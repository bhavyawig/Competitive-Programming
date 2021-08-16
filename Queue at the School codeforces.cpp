#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,j;
    cin>>n;
    cin>>t;
    char a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<t;j++)
    {
       for(i=0;i<n;i++)
    {
       if(a[i]=='B' && a[i+1]=='G')
        {
            a[i]='G';
            a[i+1]='B';
            i++;
        }
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}


