#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   lli maxi=INT_MIN;
   map<lli,lli> m;
   for(lli i=0;i<n;i++)
   {
    cin>>a[i];
    maxi=max(maxi,a[i]);
    m[a[i]]++;
   }
   if(maxi==a[0] && m[maxi]==1) cout<<"0"<<endl;
   else
   {
    maxi++;
    cout<<maxi-a[0]<<endl;
   }
    return 0;
}