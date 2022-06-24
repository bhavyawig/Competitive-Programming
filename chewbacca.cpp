
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
       if(i==0 && n==0)
       {
           x[i]=k;
       }
       else{
       x[i]=min(n,k);
       }
   }
   for(lli i=0;i<len;i++)
   {
       cout<<int(x[i]);
   }

    return 0;
}

