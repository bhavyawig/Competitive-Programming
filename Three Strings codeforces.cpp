#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string a,b,c;
       cin>>a>>b>>c;
       lli n=a.length();
       for(lli i=0;i<n;i++)
       {
           if(a[i]!=b[i])
           {
               if(a[i]==c[i])
                b[i]=c[i];
               else if(b[i]==c[i])
                a[i]=c[i];
           }
           else
           a[i]=c[i];
       }
       if(a==b)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

    return 0;
}

