#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a,b,c;
   cin>>a>>b>>c;
   if(n==1)
    cout<<0;
   else if(n==2)
    cout<<min(a,b);
   else
   {
       lli no=min(a,b);
       lli no2=min(a,min(b,c));
       n=n-2;
       cout<<no+(n*no2);
   }

    return 0;
}

