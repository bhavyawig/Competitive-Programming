#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            count++;
        }
    }
    if(count==len)
    {
        for(int i=0;i<len;i++)
        {
            s[i]=s[i]+32;
        }
    }
    else if(count==len-1 && (s[0]>=97 && s[0]<=122))
    {
        s[0]=s[0]-32;
        for(int i=1;i<len;i++)
        {
            s[i]=s[i]+32;
        }
    }
    for(int i=0;i<len;i++)
        {
            cout<<s[i];
        }

    return 0;
}

