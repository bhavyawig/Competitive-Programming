#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   lli midx=(x1+x2)/2;
   lli midy=(y1+y2)/2;
   lli m=(y2-y1)/(x2-x1);
   lli newm=-1/m;
   lli c=midy-(midx*newm);
   lli ee=c-y1;
   lli ans=(((2*x1)-(2*m*ee))+sqrt((((2*m*ee)-(2*x1))*((2*m*ee)-(2*x1))))-(4*(1+(m*m))*((x1*x1)+(ee*ee)-5)))/2*(1+(m*m));
   lli ans1=(((2*x1)-(2*m*ee))-sqrt((((2*m*ee)-(2*x1))*((2*m*ee)-(2*x1))))-(4*(1+(m*m))*((x1*x1)+(ee*ee)-5)))/2*(1+(m*m));
   if(ceil(ans)==floor(ans) || ceil(ans1)==floor(ans1))
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }


    return 0;
}
