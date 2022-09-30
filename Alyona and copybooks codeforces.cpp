#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,a,b,c;
   cin>>n>>a>>b>>c;
   if(n%4==0)
    cout<<0<<endl;
   else if((n+1)%4==0)
    cout<<min(a,min(b+c,3*c))<<endl;
   else if((n+2)%4==0)
   {
       cout<<min(2*a,min(b,2*c))<<endl;
   }
   else if((n+3)%4==0)
   {
       cout<<min(3*a,min(c,a+b))<<endl;
   }
    return 0;
}

