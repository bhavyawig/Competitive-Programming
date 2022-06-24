#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x;
   cin>>x;
   if(x>0)
   {
       cout<<x/10;
   }
   else
   {
       lli rem=x%10;
       if(rem==0)
       {
           cout<<x/10;
       }
       else
       {
           cout<<(x/10)-1;
       }
   }

    return 0;
}

