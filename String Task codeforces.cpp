
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
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='y')
        {
            s[i]='0';
        }
    }
    for(i=0;i<len;i++)
    {
        if(s[i]=='0'){continue;}
        else{
        cout<<"."<<s[i];}
    }

    return 0;
}
