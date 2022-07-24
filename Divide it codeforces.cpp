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
       lli cnt=0,cnt1=0,cnt2=0;
       while (n%2==0)
       {
           n=n/2;
           cnt++;
       }
       while(n%3==0)
       {
           n=n/3;
           cnt1++;
       }
       while(n%5==0)
       {
           n=n/5;
           cnt2++;
       }
       if(n!=1)
        cout<<-1<<endl;
        else
            cout<<cnt+(2*cnt1)+(3*cnt2)<<endl;

   }

    return 0;
}

