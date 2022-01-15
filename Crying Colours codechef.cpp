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
       lli a[3][3];
       for(lli i=0;i<3;i++)
       {
           cin>>a[i][0]>>a[i][1]>>a[i][2];
       }
       lli red=min(a[0][1],a[1][0]);
       lli green=min(a[0][2],a[2][0]);
       lli blue=min(a[1][2],a[2][1]);
       lli rediff=abs(a[0][1]-a[1][0]);
       lli grdiff=abs(a[0][2]-a[2][0]);
       lli bludiff=abs(a[1][2]-a[2][1]);
       lli ans=red+blue+green+rediff+grdiff+bludiff;
       cout<<ans<<endl;
    }

    return 0;
}

