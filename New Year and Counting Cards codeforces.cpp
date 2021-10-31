#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   lli count=0;
   cin>>s;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='1' || s[i]=='5' || s[i]=='3' || s[i]=='7' || s[i]=='9')
       {
           count++;
       }
   }
   cout<<count<<endl;

    return 0;
}

