#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s,t;
   cin>>s>>t;
   lli we=0;
   for(lli i=0;i<t.length();i++)
   {
       if(t[i]==s[we])
       {
           we++;
       }
   }
   cout<<we+1<<endl;

    return 0;
}

