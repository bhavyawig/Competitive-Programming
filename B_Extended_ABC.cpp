#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    lli a=0,b=0,c=0;
    lli no=0;
    if(s=="") cout<<"Yes";
    else{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='A' && s[i]!='B' && s[i]!='C' )
        {
            no++;
            break;
        }
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else if(s[i]=='C') c++;

        if(s[i]=='A' && (b>=1 || c>=1) )
        {
            no++;
            break;
        }
         if(s[i]=='B' && (c>=1) )
        {
            no++;
            break;
        }
    }
    if(no>=1) cout<<"No";
    else cout<<"Yes";
    }
}