#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a;
    string s;
    cin>>s;

   reverse(s.begin(), s.end());
 a=s.size();
     for(i=0;i<a;i++)
    {
        if(s[i]=='0')
        {
            s[i]='0';
        }
        else if(s[i]=='1')
        {
            s[i]='1';
        }
        else if(s[i]=='6')
        {
            s[i]='9';
        }
        else if (s[i]=='8')
        {
            s[i]='8';
        }
        else if(s[i]=='9')
        {
            s[i]='6';
        }
    }
     cout<<s;


    return 0;
}




