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
       set<int> s;
       lli x=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
           while(a[i]>n)
           {
               a[i]=a[i]/2;
           }
           while(s.find(a[i])!=s.end() && a[i]>0)
           {
               a[i]=a[i]/2;
            }
            if(a[i]==0)
            {
                x++;
            }
            else
            {
                s.insert(a[i]);
            }
       }
       lli q=sizeof(a)/sizeof(a[0]);
       sort(a,a+q);
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

