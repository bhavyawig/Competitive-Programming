#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
    for(int i=1;i<n-1;++i)
    {
        cout<<min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]))<<" ";
        cout<<max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        cout<<endl;
    }
    cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[n-1]-a[0]);

    return 0;
}

