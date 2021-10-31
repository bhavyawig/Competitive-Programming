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
        lli counta=0,countb=0,countc=0;
        for(lli i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                counta++;
            }
            if(s[i]=='B')
            {
                countb++;
            }
            if(s[i]=='C')
            {
                countc++;
            }
        }
        if(countb>=counta)
        {
            countb=countb-counta;
            counta=0;
        }
        else
        {
            countb=0;
            counta=counta-countb;
        }
        if(countb==countc && counta==0)
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
