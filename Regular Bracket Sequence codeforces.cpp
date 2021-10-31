#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        string s;
        cin>>s;
        lli len=s.length();
       // cout<<len<<endl;
       if(len%2==0 && s[0]!=')' && s[len-1]!='(')
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}
