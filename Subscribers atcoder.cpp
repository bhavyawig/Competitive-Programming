#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   if(n<=1000-1)
    cout<<n<<endl;
   else if(n>=1000 && n<=10000-1)
   {
       int val=n%10;
       n=n-val;
       cout<<n<<endl;
   }
   else if(n>=10000 && n<=100000-1)
   {
       int val=n%100;
       n=n-val;
       cout<<n<<endl;
   }
   else if(n>=100000 && n<=1000000-1)
   {
       int val=n%1000;
       n=n-val;
       cout<<n<<endl;
   }
   else if(n>=1000000 && n<=10000000-1)
   {
       int val=n%10000;
       n=n-val;
       cout<<n<<endl;
   }
   else if(n>=10000000 && n<=100000000-1)
   {
       int val=n%100000;
       n=n-val;
       cout<<n<<endl;
   }
   else
   {
       int val=n%1000000;
       n=n-val;
       cout<<n<<endl;
   }
    return 0;

}
