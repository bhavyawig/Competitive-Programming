#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    int val=-1,ok=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C' && ok==0)
        {
            ok++;
            val=i+1;
        }
    }
    cout<<val;
    return 0;
}