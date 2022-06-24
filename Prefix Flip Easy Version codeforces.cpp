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
       string a,b;
       cin>>a>>b;
       vector<lli> v;
       for(lli i=0;i<n;i++)
       {
           if(a[i]!=b[i])
           {
               if(i!=0)v.push_back(i+1);
               v.push_back(1);
               if(i!=0)v.push_back(i+1);
           }
       }
       cout<<v.size()<<" ";
       for(auto &itr:v)
       {
           cout<<itr<<" ";
       }
       cout<<endl;
   }

    return 0;
}

