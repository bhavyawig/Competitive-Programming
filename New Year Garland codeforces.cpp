#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a[3];
       cin>>a[0]>>a[1]>>a[2];
       sort(a,a+3);
      //     cout<<a[0]<<a[1]<<a[2];
       if((a[2]-1<=a[0]+a[1]) || (a[1]==a[2] && a[1]==a[0]))
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
   }

    return 0;
}

