#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli w=sizeof(a)/sizeof(a[0]);
   sort(a,a+w);
   lli sum=0;
   deque<lli> q;
   lli count=0;
   for(lli i=0;i<n;i++)
   {
       if(sum<=a[i])
       {
          sum=sum+a[i];
          q.push_front(a[i]);
          count++;
       }
       else
       {
           q.push_back(a[i]);
       }
   }
   cout<<count<<endl;

    return 0;
}

