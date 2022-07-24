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
       string s;
       cin>>s;
       map<char,lli> m;
       lli cnt=0;
       for(lli i=0;i<n;i++)
       {
           m[s[i]]++;
           if(m[s[i]]==1)
            cnt+=2;
           else
            cnt+=1;
       }
       cout<<cnt<<endl;

   }

    return 0;
}

