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
       lli sum=0,ss=0;
       if(n%2==0){
       for(lli i=1;i<=n;i++)
       {
           if(i%2!=0)
           {
               ss=i^(i+1);
               sum=sum+ss;
           }
           else
           {
               ss=i^(i-1);
               sum=sum+ss;
           }
       }
       }
       else{
        for(lli i=1;i<n;i++)
       {
           if(i%2!=0)
           {
               ss=i^(i+1);
               sum=sum+ss;
           }
           else
           {
               ss=i^(i-1);
               sum=sum+ss;
           }
       }
       }
       cout<<sum<<endl;
   }

    return 0;
}

