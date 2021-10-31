#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   for(lli i=0;i<k;i++)
   {
       if(n%10==0)
       {
           n=n/10;
       }
       else
       {
           n=n-1;
       }
   }
   cout<<n<<endl;
    return 0;
}

