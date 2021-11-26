#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   if(n==1)
   {
       cout<<"4"<<endl;
   }
   else if(n==2)
   {
       cout<<"6"<<endl;
   }
   else if(n==3)
   {
       cout<<"8"<<endl;
   }
   else{
   lli sqr=sqrt(n);
   lli count=0;
   count=count+(sqr*4);
   lli left=n-(sqr*sqr);
   lli str=ceil((double)left/sqr);
   count=count+(str*2);
   cout<<count<<endl;
   }

    return 0;
}

