#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli n1=n-m;
   lli maxi=n1+1;
   lli mini=0,ans=0,ans1=0,mini1=0;
   lli ansmax=(maxi*(maxi-1))/2;
   if(n%m==0)
   {
       mini=(n/m);
       ans=(mini*(mini-1))/2;
       ans=ans*m;
   }
   else
   {
       mini=(n/m);
       lli left=n-(mini*m);
       lli jj=m-left;
       ans=ans+jj*((mini*(mini-1))/2);
       mini++;
        ans=ans+left*((mini*(mini-1))/2);
   }
   cout<<ans<<" "<<ansmax<<endl;


    return 0;
}

