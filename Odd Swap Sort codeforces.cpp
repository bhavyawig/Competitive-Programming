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
       lli z=0;
       vector<lli> a,b;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
           b.push_back(samp);
       }
       sort(b.begin(),b.end());
     /*  for(lli i=0;i<n;i++)
       {
           if(a[i]!=b[i])
           {
               lli sum=a[i]+b[i];
               if(sum%2==0)
                z++;
           }
       }
       */
       for(lli i=0;i<n;i=i+2)
       {
           if(a[i]%2==0)
           {
               z++;
           }
       }
       for(lli i=1;i<n;i=i+2)
       {
           if(a[i]%2!=0)
           {
               z++;
           }
       }
       if(z==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }

    return 0;
}

