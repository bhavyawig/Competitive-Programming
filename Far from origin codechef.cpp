#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x1,y1,x2,y2;
       cin>>x1>>y1>>x2>>y2;
       double ans1=sqrt((x1*x1)+(y1*y1));
       double ans2=sqrt((x2*x2)+(y2*y2));
       if(ans1==ans2)
        cout<<"EQUAL"<<endl;
       else if(ans1>ans2)
        cout<<"ALEX"<<endl;
       else
        cout<<"BOB"<<endl;
   }

    return 0;
}


