 // max=n-(m+1)
 // min=n-(2*m)
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{

   lli n,m;
   cin>>n>>m;
   lli maxi=n-(m+1);
   lli mini=n-(2*m);
   if(mini<0)
   {
       mini=0;
   }
   cout<<mini<<" "<<maxi;

    return 0;
}
