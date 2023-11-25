#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,l;
    cin>>n>>l;
    lli a[n];
    lli cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=l) cnt++;
    }
    cout<<cnt<<endl;
}