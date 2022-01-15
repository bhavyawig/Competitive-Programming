#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
     lli n,x,y;
     cin>>n>>x>>y;
     int left=(n+1)/2;
     int right=(n+1)/2;
     int al=abs(left-x);
     int ar=abs(right-y);
     int ans=al+ar;
     if(ans%2!=0)
     {
         cout<<"1"<<endl;
     }
     else
     {
         cout<<"0"<<endl;
     }
   }

    return 0;
}

