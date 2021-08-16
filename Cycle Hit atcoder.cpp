#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counth=0,counthr=0,count2b=0,count3b=0;
    for(int i=0;i<4;i++)
    {
        string s;
        cin>>s;
        int len=s.length();
        for(int j=0;j<len;j++)
        {
            if(s[j]=='H' && s[j+1]=='R')
            {
                counthr++;
            }
             else if(s[j]=='H')
            {
                counth++;
            }
            if(s[j]=='2' && s[j+1]=='B')
            {
                count2b++;
            }
            if(s[j]=='3' && s[j+1]=='B')
            {
                count3b++;
            }

        }
    }
    //cout<<counth<<counthr<<count2b<<count3b;
   if(counth>=1 && counthr>=1 && count2b>=1 && count3b>=1)
   {
       cout<<"Yes";
   }
   else
   {
       cout<<"No";
   }


    return 0;
}

