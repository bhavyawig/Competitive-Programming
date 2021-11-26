#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
      lli a,b;
      cin>>a>>b;
       lli sum =0;
       sum = (a+b)/4;
        if(min(a,b)>=sum){
            cout<<sum<<endl;
        }else{
         cout<<min(a,min(b,sum))<<endl;
        }
}
    return 0;
}

