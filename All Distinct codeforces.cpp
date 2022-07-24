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
       set<lli> s;
       for(lli i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
       }
       lli ans=s.size();
       lli no=n-s.size();
       if(no%2==0)
                cout<<s.size()<<endl;
       else
        cout<<s.size()-1<<endl;
   }

    return 0;
}


