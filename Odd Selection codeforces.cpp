#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x;
       cin>>n>>x;
       lli even=0,odd=0;
       lli a[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }
       }
       if(odd==0)
       {
           cout<<"No"<<endl;
       }
       else
       {
           bool ans=false;
           for(lli i=1;i<=odd;i++)
           {
               if(i%2!=0)
               {
                   lli left=x-i;
                   if(even>=left && left>=0)
                   {
                       ans=true;
                   }
               }
           }
           if(ans==true)
           cout<<"Yes"<<endl;
           else
            cout<<"No"<<endl;
       }
   }

    return 0;
}

