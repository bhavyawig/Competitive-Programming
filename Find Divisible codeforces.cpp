#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli l,r;
       lli k=2;
       cin>>l>>r;
       lli x=0;
       while(x==0)
       if(l*k<=r){
        cout<<l<<" "<<l*k<<endl;
        x++;
       }
       else
        k++;

   }

    return 0;
}

