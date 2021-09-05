#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i;
    cin>>n;
    cin>>p;
    int a[p],arr[n+1];
     for(i=1;i<=n;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<p;i++)
    {
        cin>>a[i];
        arr[a[i]]++;
    }
    cin>>q;
    int s[q];
    for(i=0;i<q;i++)
    {
        cin>>s[i];
        arr[s[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]<=0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            exit(0);
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}
