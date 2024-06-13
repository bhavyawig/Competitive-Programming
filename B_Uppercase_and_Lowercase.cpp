#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]>='a' && s[i]<='z') l++;
        if(s[i]>='A' && s[i]<='Z') u++;
    }
    if(u>l)
    {
         for(int i=0;i<s.length();i++)
    {
        
        if(s[i]>='a' && s[i]<='z') s[i]-=32;
    }
    cout<<s;
    }
    else
    {
         for(int i=0;i<s.length();i++)
    {
        
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    cout<<s;
    }
    return 0;
}


