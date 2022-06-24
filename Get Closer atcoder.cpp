#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   double a,b;
   cin>>a>>b;
   double x,y;
   if(b==0)
    cout<<setprecision(9)<<1<<" "<<0;
   else{
   y=sqrt((b*b)/((a*a)+(b*b)));
   x=(a*y)/b;
   cout<<setprecision(9)<<x<<" ";
   cout<<setprecision(9)<<y;
   }
    return 0;
}

