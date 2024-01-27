#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   for(int y=0;y<t;y++)
   {
    lli n,k;
    cin>>n>>k;
    lli cnt=0;
    lli a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==k) cnt++;
    }
    if(cnt>=1) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   }
}