#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x;
       cin>>n>>x;
       vector<int> v;
       for(int i=0;i<n;i++)
       {
           lli e;
           cin>>e;
           v.push_back(e);
       }
       sort(v.begin(),v.end());
       lli count=0,no=0,w=0;
       for(int i=n-1;i>=0;i--)
       {
           count=count+v[i];
           if(count>=x)
           {
               no++;
               break;
           }
           else
           {
               no++;
           }
       }
       if(no==n && count<x)
       {
           cout<<"-1"<<endl;
       }
       else
       {
           cout<<no<<endl;
       }
   }

    return 0;
}
