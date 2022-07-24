#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   lli x=0,y=0,up=0,down=0,cnt=0;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='U')
       {
           y++;
       }
       else
       {
           x++;
       }
       if(i==0)
       {
           if(y>x)
            up++;
           else
            down++;
       }
       if(y>x && up==0 && i>0)
       {
           up++;
           cnt++;
           down=0;
       }
       if(y<x && down==0 && i>0)
       {
           down++;
           up=0;
           cnt++;
       }
   }
   cout<<cnt<<endl;

    return 0;
}

