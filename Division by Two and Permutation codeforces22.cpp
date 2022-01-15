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
       lli a[n];
       vector<int> s;
       lli k=2,power=2,x=0;
       lli ans1=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
           if(a[i]<=n)
           {
               s.push_back(a[i]);
           }
           else
           {
               while(a[i]>0)
               {
                   a[i]=a[i]/2;
                   if(a[i]<=n && a[i]>0)
                   {
                       s.push_back(a[i]);
                   }
               }
           }
       }
       sort(s.begin(),s.end());
       bool ans;
       for(int i=1;i<=n;i++)
       {
           ans=binary_search(s.begin(),s.end(),i);
           if(ans==false)
           {
               x++;
           }
       }
       if(x==0)
       {
           cout<<"yes"<<endl;
       }
       else
       {
           cout<<"no"<<endl;
       }
   }

    return 0;
}

