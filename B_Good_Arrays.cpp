#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli y=0;y<t;y++){
   lli n;
   cin>>n;
   lli a[n];
   lli one=0,sum=0;
   for(lli i=0;i<n;i++)
   {
    cin>>a[i];
    sum+=a[i];
    if(a[i]==1)
    one++;
   }
   //cout<<sum<<endl;
   if(n!=1 && sum-n>=one) cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
    }
    return 0;
}