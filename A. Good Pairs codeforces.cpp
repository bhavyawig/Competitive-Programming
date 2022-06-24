#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[n];
       for(lli i=0;i<n;i++)
        cin>>a[i];

       lli maxi=a[0],mini=a[0],index1=1,index2=1;
       for(lli i=0;i<n;i++)
       {
           if(a[i]<mini)
           {
               mini=a[i];
               index1=i+1;
           }
           if(a[i]>maxi)
           {
               maxi=a[i];
               index2=i+1;
           }
       }
       cout<<index1<<" "<<index2<<endl;
   }

    return 0;
}

