#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     lli cnt=0;
     while(n!=1)
     {
        cnt+=n;
         n=n/2;
     }
     cnt++;
     cout<<cnt<<endl;
    }

    return 0;

}
