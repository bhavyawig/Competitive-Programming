#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x;
   cin>>x;
   if(x==0)
   {
       cout<<"No"<<endl;
   }
   else if(x%100==0)
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }

    return 0;
}

