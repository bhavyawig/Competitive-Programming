#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       if(n%3==0)
       {
           cout<<n<<endl;
       }
       else if(n%3==1)
       {
           cout<<n<<endl;
       }
       else
       {
           while(n%3==0 || n%3==1)
           {
               n=n/3;
           }
           cout<<n<<endl;
       }
    }

    return 0;
}

