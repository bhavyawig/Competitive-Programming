#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t;
   cin>>t;
   int i;
   for(i=0;i<t;i++)
   {
       int x,m,d,mul,delay;
       cin>>x;
       cin>>m;
       cin>>d;
       mul=x*m;
       delay=x+d;
       if(mul<=delay)
       {
           cout<<mul<<endl;
       }
       else{
        cout<<delay<<endl;
       }
   }
    return 0;
}
