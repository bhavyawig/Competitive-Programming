
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b,c,x,y;
       cin>>a>>b>>c>>x>>y;
       if(a>=x)
        x=0;
       else
        x=x-a;
       if(b>=y)
       y=0;
       else
        y=y-b;
       if(x!=0 && c>=x){
        c=c-x;
        x=0;
       }
       if(y!=0 && c>=y)
       {
           c=c-y;
           y=0;
       }
       if(x==0 && y==0)
        cout<<"yes"<<endl;
       else
        cout<<"no"<<endl;




   }

    return 0;
}
