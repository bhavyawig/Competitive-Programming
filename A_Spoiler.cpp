#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    string uf;
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='|')
        {
            cnt++;
        }
        else if(cnt==0 || cnt==2)
        uf+=s[i];
    }
    cout<<uf;
}
