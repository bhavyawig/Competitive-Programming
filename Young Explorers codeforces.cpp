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
       lli count=0,p=1;
       vector<lli> v;
       for(int i=0;i<n;i++)
       {
           lli x;
           cin>>x;
           v.push_back(x);
       }
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++)
       {
           p=1;
           while(i<(n-1) && p<v[i])
           {
               p++;i++;
           }
           if(p>=v[i])
           {
               count++;
           }
       }
       cout<<count<<endl;
   }

    return 0;
}

