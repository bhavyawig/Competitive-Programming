#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli a[n];
    for(lli i=0; i<n; i++)
        cin>>a[i];
    lli temp=m;
    lli cnt=0,store=INT_MAX;
    for(lli i=0; i<n; i++)
    {
        if(a[i]<=temp)
        {
            temp=temp-a[i];
        }
        else
        {
            cnt++;
            temp=m;
            if(a[i]<=temp)
            {
                temp=temp-a[i];
            }
        }
    }
    if(temp==m)
        cout<<cnt<<endl;
    else
        cout<<cnt+1;
    return 0;
}


