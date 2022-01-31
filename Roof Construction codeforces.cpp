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
       lli k=n-1;
       if(n%2==0){
       for(lli i=0;i<(n/2);i++)
       {
           cout<<k<<" "<<i<<" ";
           k--;
       }
       cout<<endl;
       }
       else
       {
            for(lli i=0;i<(n/2);i++)
       {
           cout<<k<<" "<<i<<" ";
           k--;
       }
       cout<<k;
       cout<<endl;
       }
   }

    return 0;
}

