#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    string cpy,s1,cpy1,te,te1;
    lli a=s.length();
    s1=s;
    cpy=s;te=s;
    cpy1=s;te1=s;
    for(lli i=0;i<s.length()-1;i++)
    {
        s1+=s1[0];
        s1.erase(s1.begin()+0);
        if(s1<cpy)
        {
            cpy=s1;
        }
        if(s1>cpy1)
        {
            cpy=s1;
        }
    }
    s1=s;
    for(lli i=0;i<s.length()-1;i++)
    {
        s1.insert(s1.begin(),s[a]);
        s1.erase(s1.begin()+a);
        if(s1<te)
        {
            te=s1;
        }
        if(s1>te1)
        {
            te1=s1;
        }
    }
    if(cpy<te)
    {
        cout<<cpy<<endl;
    }
    else
    {
        cout<<te<<endl;
    }
    if(cpy1<te1)
    {
        cout<<cpy1<<endl;
    }
    else
    {
        cout<<te1<<endl;
    }

    return 0;
}

