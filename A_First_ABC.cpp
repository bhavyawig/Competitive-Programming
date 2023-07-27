#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    bool ans=true;
    lli a=0,b=0,c=0;
    for(lli i=0;i<n;i++)
    {
        if(s[i]=='A') a++;
        if(s[i]=='B') b++;
        if(s[i]=='C') c++;
        if(a>=1 && b>=1 && c>=1 && ans==true)
        {
            cout<<i+1<<endl;
            ans=false;
            break;
        }
    }
    return 0;

}
