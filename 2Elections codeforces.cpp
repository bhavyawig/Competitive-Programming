#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli m;
   cin>>m;
   map<int,int> me;
   lli maxi=INT_MIN,store=0;
   for(lli i=0;i<m;i++)
   {
       lli a[n];
       maxi=INT_MIN;
       for(lli j=0;j<n;j++)
       {
           cin>>a[j];
           if(maxi<a[j])
           {
               maxi=a[j];
               store=j;
            }
       }
       me[store]++;
   }
   int deshaw=INT_MIN,dq=0;
   for(auto itr:me)
   {
       if(deshaw<itr.second)
       {
           deshaw=itr.second;
           dq=itr.first;
       }
   }
   cout<<dq+1<<endl;

    return 0;
}


