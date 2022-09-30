#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli tf=0,fifty=0;
   lli x=0;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==25)
        tf++;
       if(a[i]==50)
       {
           if(tf>=1)
           {
               tf--;
               fifty++;
           }
           else
            x++;
       }
       if(a[i]==100)
       {
           if(tf>=1 && fifty>=1)
           {
               tf--;
               fifty--;
           }
           else if(tf>=3)
           {
               tf=tf-3;
           }
           else
            x++;
       }
   }
   if(x==0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

    return 0;
}

