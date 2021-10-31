#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli tn;
   cin>>tn;
   for(lli i=1;i<=tn;i++)
   {
       if((i*(i+1))/2==tn)
       {
           cout<<"YES"<<endl;
           exit(0);
       }
   }
   cout<<"NO"<<endl;
    return 0;
}

