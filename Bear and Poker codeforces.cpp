#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   int one=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       while(a[i]%2==0 || a[i]%3==0)
       {
           if(a[i]%2==0)
            a[i]=a[i]/2;
           else
            a[i]=a[i]/3;
       }
   }
   set<lli> ss;
   for(int i=0;i<n;i++)
    ss.insert(a[i]);
   if(ss.size()==1)
    cout<<"Yes";
   else
    cout<<"No";

    return 0;
}


