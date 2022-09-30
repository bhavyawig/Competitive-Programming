#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   lli sum=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   lli test=0,index=INT_MAX,kro=0;
   lli val=ceil(sum/2.00);
   //cout<<val;
   for(int i=0;i<n;i++)
   {
       kro+=a[i];
       if(kro>=val && test==0)
       {
           index=i;
           test++;
       }
   }
   cout<<index+1<<endl;
    return 0;
}


