#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
 string s;
 string ans;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
    if(s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='i')
    continue;
    else
    ans+=s[i];
 }
 cout<<ans<<endl;
    return 0;
}