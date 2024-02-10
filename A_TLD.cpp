#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    string str="";
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]!='.')
       str+=s[i];
        else
        break;
    } 
    reverse(str.begin(),str.end());
    cout<<str;
}
