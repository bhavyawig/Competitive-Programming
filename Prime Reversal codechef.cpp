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
       string a,b;
       cin>>a>>b;
       lli are=0,uff=0;
       for(lli i=0;i<n;i++)
       {
           if(a[i]=='1')
            are++;
           if(b[i]=='1')
            uff++;
       }
       if(are==uff)
        cout<<"yes"<<endl;
       else
        cout<<"NO"<<endl;
   }

    return 0;
}


