#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x,y,z;
   cin>>x>>y>>z;
   if(x==y && z!=0)
   {
       cout<<"?"<<endl;
   }
   else if(x+z>=y && y+z>=x && z!=0)
   {
       cout<<"?"<<endl;
   }
   else if(x+z>y)
   {
       cout<<"+"<<endl;
   }
   else if(y+z>x)
   {
       cout<<"-"<<endl;
   }
   else if(x+z==y || y+z==x)
   {
       cout<<"0"<<endl;
   }
    return 0;
}

