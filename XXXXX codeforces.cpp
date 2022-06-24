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
       lli a[n];
       lli sum=0,sum1=0;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
           sum1+=a[i];
       }
       if(sum%x!=0)
       {
           cout<<n<<endl;
       }
       else{
            lli store=-1,z=0,zz=0,store1=-1;
           // sort(a,a+n);
       for(lli i=0;i<n;i++)
       {
           sum=sum-a[i];
           if(sum%x!=0 && z==0)
           {
               store=i;
               z++;
               break;
           }
       }
        for(lli i=n-1;i>=0;i--)
       {
           sum1=sum1-a[i];
           if(sum1%x!=0 && zz==0)
           {
               store1=i; //7
               zz++;
               break;
           }
       }
      // cout<<store<<endl;
       //cout<<store1<<endl;
       if(store==-1)
       {
           cout<<-1<<endl;
       }
       else
       {
           cout<<max(n-store-1,store1)<<endl;
       }
       }
   }

    return 0;
}

