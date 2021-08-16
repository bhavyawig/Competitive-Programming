#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,max;
    cin>>n;
    int i,org[n],ne[n];
    for(i=0;i<n;i++)
    {
        cin>>org[i];
    }
    for(i=0;i<n;i++)
    {
        ne[i]=0;
    }
     for(i=0;i<n;i++)
    {
        ne[org[i]]++;
    }
    max=ne[0];
    for(i=0;i<n;i++)
    {
       if(max<ne[i]){
        max=ne[i];
        p=i;
       }
    }
    cout<<p;
    return 0;
}
