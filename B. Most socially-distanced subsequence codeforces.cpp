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
       for(lli i=0;i<n;i++)
        cin>>a[i];

       vector<lli> beh;
       beh.push_back(a[0]);
       for(lli i=1;i<n-1;i++)
       {
           if(a[i]>a[i-1] && a[i]>a[i+1])
            beh.push_back(a[i]);
            if(a[i]<a[i-1] && a[i]<a[i+1])
            beh.push_back(a[i]);
       }
       beh.push_back(a[n-1]);
       cout<<beh.size()<<endl;
       for(lli i=0;i<beh.size();i++)
        cout<<beh[i]<<" ";

       cout<<endl;
   }

    return 0;
}

