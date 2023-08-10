#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++){
   lli n;
   cin>>n;
   lli a[n];
   lli sum=0;
   for(lli i=0;i<n;i++)
   {
    cin>>a[i];
   sum+=a[i];
   }
   int yes=0,yes1=0;
  if(sum%2==0)
  {
    for(lli i=0;i<n;i++)
   {
    int u=sum-a[i];
    if(a[i]%2==0 && u%2==0)
    yes++;
     if(a[i]%2!=0 && u%2!=0)
    yes++;
   }
   if(yes>=1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
  else
  {
    for(lli i=0;i<n;i++)
   {
    int y=sum-a[i];
    if(y%2!=0 && a[i]%2!=0)
    yes1++;
    if(y%2==0 && a[i]%2==0)
    yes1++;
   }
   if(yes1>=1) cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
  }
    }
    return 0;
}