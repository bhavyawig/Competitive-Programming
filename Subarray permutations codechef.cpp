#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       if((k==1 && n!=1) || k>n)
       {
           cout<<"-1"<<endl;
       }
       else
       {
           vector<lli> a;
           for(lli i=1;i<k;i++)
           {
               a.push_back(i);
           }
           for(lli i=n;i>=k;i--)
           {
               a.push_back(i);
           }
           for(auto &it:a)
           {
               cout<<it<<" ";
           }
           cout<<endl;
       }
   }

    return 0;
}

