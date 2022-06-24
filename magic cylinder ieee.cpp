#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   vector<lli> a;
   for(lli i=0;i<s.length();i++)
   {
       a.push_back(s[i]);
   }
   for(lli i=1;i<a.size();i++)
   {
       if(a[i]==a[i-1])
       {
           cout<<i-1<<endl;
       }
       else
       {
           cout<<i+1
       }
   }



    return 0;
}
