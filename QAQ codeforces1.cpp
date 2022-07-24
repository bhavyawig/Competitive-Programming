#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli num=0;
   lli arr[s.length()];
   lli cnt=0;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='Q')
        num++;
       arr[i]=num;
   }
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='A')
        cnt+=arr[i]*(arr[s.length()-1]-arr[i]);
   }
   cout<<cnt<<endl;
    return 0;
}

