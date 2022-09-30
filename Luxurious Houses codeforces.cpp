#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   lli suf[n];
   suf[n-1]=a[n-1];
   for(lli i=n-2;i>=0;i--)
   {
       suf[i]=max(suf[i+1],a[i]);
   }
   for(int i=0;i<n-1;i++)
   {
       if(a[i]>suf[i+1])
       {
           cout<<0<<" ";
       }
       else
       {
           cout<<suf[i+1]+1-a[i]<<" ";
       }
   }
   cout<<"0"<<endl;
    return 0;
}


