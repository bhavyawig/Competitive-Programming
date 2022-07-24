#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli x=0;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='A' || s[i]=='H' || s[i]=='I' || s[i]=='M' || s[i]=='O' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='X'
          || s[i]=='Y')
            continue;
       else
        x++;
   }
   if(x==0)
   {
       for(lli i=0;i<s.length();i++)
       {
           if(s[i]==s[s.length()-i-1])
            continue;
           else
            x++;
       }
       if(x==0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
   else
    cout<<"NO"<<endl;

    return 0;
}


