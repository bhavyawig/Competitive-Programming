#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x;
   cin>>x;
   lli count=0;
   while(x)
   {
       x=x&(x-1);
       count++;
   }


  cout<<count<<endl;
    return 0;
}
