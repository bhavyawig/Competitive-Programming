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
       lli a[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
       }
       lli even1=0,even2=0;
       lli odd1=0,odd2=0;
       for(lli i=0;i<n;i=i+2)
       {
           if(a[i]%2==0)
            even1++;
           else
            odd1++;
       }
       for(lli i=1;i<n;i=i+2)
       {
           if(a[i]%2==0)
            even2++;
           else{
            odd2++;
           // cout<<a[i]<<" ";
           }

       }
      // cout<<even1<<" "<<odd2<<endl;
       if(even1==0 || odd1==0)
       {
           if(even2==0 || odd2==0)
           {
               cout<<"yes"<<endl;
           }
           else
            cout<<"no"<<endl;
       }
       else
        cout<<"no"<<endl;
   }

    return 0;
}

