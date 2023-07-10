#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     string s;
     cin>>s;
     lli cnt=0,colon=0,brac=0,colon2=0;
     for(int i=0;i<n;i++)
     {
        if(s[i]==':' && brac==0 && colon2==0) colon++;
        if(s[i]==')' && colon>=1) brac++;
        if(s[i]==':' && brac>=1 && colon>=1) colon2++;
        if(s[i]=='(')
        {
            colon=0;brac=0;colon2=0;
        }
        if(colon>=1 && brac>=1 && colon2>=1 ) {
            cnt++;
            brac=0; colon=1;colon2=0;
        }
     }
     cout<<cnt<<endl;
    }

    return 0;

}
