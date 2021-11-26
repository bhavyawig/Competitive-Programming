#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli s,t,x;
   cin>>s>>t>>x;
   if(t==0)
   {
       t=24;
   }
   for(lli i=s;i<=t;i++)
   {
       if(i==24)
       {
           i=0;
       }
       if(x==i)
       {
           cout<<"Yes"<<endl;
           exit(0);
       }
   }
   cout<<"No"<<endl;

    return 0;
}

