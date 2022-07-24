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
   lli maxi=a[0],index=0;
   for(lli i=1;i<n;i++)
   {
       if(maxi<a[i]){
        maxi=a[i];
       index=i;}
   }
   sort(a,a+n);
   cout<<index+1<<" "<<a[n-2]<<endl;

    return 0;
}

