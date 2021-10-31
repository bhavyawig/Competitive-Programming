#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        string s;
        cin>>s;
        char a;
        stack<char> se;
        for(lli i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                {
                    se.push(s[i]);
                }
                if(s[i]==')')
                {
                    a=se.top();
                    if(a=='(')
                    {
                        se.pop();
                    }
                }
                 if(s[i]=='}')
                {
                    a=se.top();
                    if(a=='{')
                    {
                        se.pop();
                    }
                }
                 if(s[i]==']')
                {
                    a=se.top();
                    if(a=='[')
                    {
                        se.pop();
                    }
                }
        }
        if(se.empty())
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
    }

    return 0;
}

