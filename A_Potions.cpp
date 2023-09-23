#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,h,x;
    cin>>n>>h>>x;
    lli a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lli no=0;
     for(int i=0;i<n;i++)
    {
       if(h+a[i]>=x && no==0)
       {
        cout<<i+1<<endl;
        no++;
        break;
       }
    }
    
    return 0;
}