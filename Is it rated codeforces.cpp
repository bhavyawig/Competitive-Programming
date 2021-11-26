
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n],b[n],c[n];
   lli z=0,s=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
   }
   for(lli i=0;i<n;i++)
   {
       if(a[i]!=b[i])
       {
           z++;
       }
   }
   if(z>=1)
   {
       cout<<"rated"<<endl;
   }
   else
   {
       for(lli i=0;i<n;i++)
       {
           c[i]=b[i];
       }
       lli q=sizeof(c)/sizeof(c[0]);
       sort(c,c+q);
       lli k=n-1;
       for(lli i=0;i<n;i++)
   {
       if(c[k]!=b[i])
       {
           s++;
       }
       k--;
   }
   if(s>=1)
   {
       cout<<"unrated"<<endl;
   }
   else
   {
       cout<<"maybe"<<endl;
   }

   }

    return 0;
}
