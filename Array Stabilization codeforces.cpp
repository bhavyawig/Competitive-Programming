#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for (lli i=0;i<n;i++)
       cin>>a[i];
       sort(a,a+n);
       lli ans=a[n-2]-a[0];
       lli ans2=a[n-1]-a[1];
       cout<<min(ans,ans2)<<endl;

    return 0;
}


