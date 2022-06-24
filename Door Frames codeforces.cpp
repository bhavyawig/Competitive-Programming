#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,a,b;
   cin>>n>>a>>b;
   lli vert=4*a;
   lli hor=2*b;
   lli count=0;
   if(a>=b)
   {
       lli no=n/a;
       count=count+(4*no);
       vert=vert-no;
       lli left=n-no;
       lli yo=left/b;
              count=count+(2*yo);
       hor=hor-yo;
   }
   else
   {
       lli no1=n/b;
       count=count+(4*no1);
       hor=hor-no1;
       lli left1=n-no1;
       lli yo1=left1/a;
       count=count+(2*yo1);
       vert=vert-yo1;
   }
   cout<<count<<endl;

    return 0;
}

