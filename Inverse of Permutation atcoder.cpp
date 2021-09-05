#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli p[n],q[n];
   for(int i=0;i<n;i++)
   {
       q[i]=0;
   }
   for(int i=0;i<n;i++)
   {
       cin>>p[i];
   }
    for(int i=0;i<n;i++)
    {
        q[p[i]-1]=i+1;
    }
     for(int i=0;i<n;i++)
     {
         cout<<q[i]<<" ";
     }
    return 0;
}


