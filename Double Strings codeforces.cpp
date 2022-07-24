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
       string a[n];
       map<string,lli> m;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       for(lli i=0;i<n;i++)
       {
           lli ans=0;
           for(lli j=0;j<a[i].length();j++){
           string val1=a[i].substr(0,j+1);
           string val2=a[i].substr(j+1);
           if(m[val1]>=1 && m[val2]>=1)
            ans=1;
           }
           if(ans==1)
            cout<<1;
           else
            cout<<0;
       }
       cout<<endl;
   }

    return 0;
}

