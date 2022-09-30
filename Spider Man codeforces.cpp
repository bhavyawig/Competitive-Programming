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
   suf[0]=a[0]-1;
   for(int i=1;i<n;i++)
   {
       suf[i]=suf[i-1]+a[i]-1;
   }
   for(int i=0;i<n;i++)
   {
       if(suf[i]%2==0)
        cout<<"2"<<endl;
       else
        cout<<"1"<<endl;
   }

    return 0;
}


