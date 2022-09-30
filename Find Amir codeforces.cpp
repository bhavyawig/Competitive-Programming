#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli ans=n/2;
   if(n%2==0)
    cout<<ans-1<<endl;
   else
    cout<<ans<<endl;
    return 0;
}


