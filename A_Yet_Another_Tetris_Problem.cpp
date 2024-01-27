#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   for(int y=0;y<t;y++)
   {
    lli n;
    cin>>n;
    lli cnt=0;
    lli a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) cnt++;
    }
    if(cnt==n || cnt==0) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   }
}