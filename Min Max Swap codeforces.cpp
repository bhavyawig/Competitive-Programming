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
       lli a[n],b[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(lli i=0;i<n;i++)
       {
           cin>>b[i];
       }
       lli maxa=INT_MIN,maxb=INT_MIN;
              lli maxaf=INT_MIN,maxbf=INT_MIN;
       for(lli i=0;i<n;i++)
       {
           if(maxa<a[i])
           {
               maxa=a[i];
           }
           if(maxb<b[i])
           {
               maxb=b[i];
           }
       }
       if(maxa>=maxb)
       {
           for(lli i=0;i<n;i++)
           {
               if(a[i]<b[i])
               {
                   swap(a[i],b[i]);
               }
           }
       }
       else
       {
            for(lli i=0;i<n;i++)
           {
               if(b[i]<a[i])
               {
                   swap(a[i],b[i]);
               }
           }
       }
      /* for(lli i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
       for(lli i=0;i<n;i++)
       {
           cout<<b[i]<<" ";
       }
*/
       for(lli i=0;i<n;i++)
       {
           if(maxaf<a[i])
           {
               maxaf=a[i];
           }
           if(maxbf<b[i])
           {
               maxbf=b[i];
           }
       }
       cout<<maxaf*maxbf<<endl;
   }

    return 0;
}

