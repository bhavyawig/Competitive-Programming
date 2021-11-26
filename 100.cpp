#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,t,k,d;
   cin>>n>>t>>k>>d;
   double r=d,q=t;
    lli w=ceil( r/q);
   //cout<<w<<endl;
   n=n-(w*k);
   if(n>0)
   {
       if(d%t!=0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           if(n>k)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }

   }
   else
   {
       cout<<"NO"<<endl;
   }

    return 0;
}

