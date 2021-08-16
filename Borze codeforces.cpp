#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<"1";
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
        else{
            cout<<"0";
        }
    }
}
