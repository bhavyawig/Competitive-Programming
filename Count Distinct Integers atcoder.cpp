#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   set<lli> s;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       s.insert(a[i]);
   }
   cout<<s.size()<<endl;


    return 0;
}

