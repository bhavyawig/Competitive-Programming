#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   lli pos=0;
   for(lli i=0;i<n;i++)
   {
       if(s[i]=='+')
        pos++;
       else if(s[i]=='-' && pos>=1)
        pos--;
   }
   cout<<pos;

    return 0;
}

