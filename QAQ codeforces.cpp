#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli cnt=0;
   for(lli i=0;i<s.length();i++)
   {
       for(lli j=i+1;j<s.length();j++)
       {
           for(lli k=j+1;k<s.length();k++)
           {
               if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
                cnt++;
           }
       }
   }
   cout<<cnt<<endl;
    return 0;
}

