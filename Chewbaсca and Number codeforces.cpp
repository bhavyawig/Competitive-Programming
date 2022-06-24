#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string x;
   cin>>x;
   lli len=x.length();
   for(lli i=0;i<len;i++)
   {
       lli k=(int(x[i])-48);
       lli n=9-k;
       x[i]=min(n,k);
   }
   cout<<x<<endl;

    return 0;
}

