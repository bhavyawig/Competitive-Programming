#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[2*n];
       map<int,int> m;
       for(int i=0;i<2*n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       int check=n+(n+1)/2;
       lli ans=INT_MIN;
       for(auto itr:m)
       {
           if(ans<itr.second)
           {
               ans=itr.second;
           }
       }
       //cout<<s.size()<<endl;
       if(ans>check)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
   }

    return 0;
}

