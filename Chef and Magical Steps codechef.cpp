#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool prime(lli c)
{
    lli z=c/2;
    lli w=0;
    for(lli j=2;j<z;j++)
    {
        if(c%j==0)
        {
            w++;
        }
    }
    if(w>=1)
    {
        return false;
    }
    else
    {
        return true;
    }

}
int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x,y,count=0;
       cin>>x>>y;
       for(lli i=x;i<y;i++)
       {
           if(prime(x+2))
           {
              count=count+2;
           }
           else
           {
               count++;
           }
       }
     cout<<count<<endl;
   }

    return 0;
}

