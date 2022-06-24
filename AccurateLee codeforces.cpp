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
       string s;
       cin>>n>>s;
       lli x=0;
       for(lli i=1;i<s.length();i++)
       {
           if(s[i]=='0' && s[i-1]=='1')
            x++;
       }
       if(x==0)
        cout<<s<<endl;
        else
        {
            lli zero=0,ones=0,v=0;
            for(lli i=0;i<s.length();i++)
            {
                if(s[i]=='0' && v==0 && s[0]=='0')
                    zero++;
                else
                    v++;
            }
            v=0;
            for(lli i=s.length()-1;i>=0;i--)
            {
                if(s[i]=='1' && s[s.length()-1]=='1' && v==0)
                    ones++;
                else
                    v++;
            }
            for(lli i=0;i<zero+1;i++)
                cout<<0;
            for(lli i=0;i<ones;i++)
                cout<<1;
            cout<<endl;
        }
   }

    return 0;
}

