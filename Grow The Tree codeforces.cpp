#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
       cin>>a[i];

   sort(a,a+n);
   lli x=0,y=0;
   lli start=0,endd=n-1;
   while(start<endd)
   {
       if(start==endd)
        break;
       x+=a[endd];//3
       endd--;// 1
       y+=a[start];// 1
       start++;//1
   }
   if(start==endd)
   {
       x+=a[start];;
   }
   cout<<(x*x)+(y*y)<<endl;

    return 0;
}


