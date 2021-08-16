
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='T')
        {
            count=count+4;
        }
         if(s[0]=='C')
        {
            count=count+6;
        }
         if(s[0]=='O')
        {
            count=count+8;
        }
         if(s[0]=='D')
        {
            count=count+12;
        }
         if(s[0]=='I')
        {
            count=count+20;
        }
    }
    cout<<count;

    return 0;
}
