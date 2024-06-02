#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(lli i=0;i<n;i++)
        {
            if(i+2<s.length() && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')
            {
                cnt++;
                i+=2;
                //cout<<"o";
            }
            else if(i+2<s.length() && s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')
            {
                cnt++;
                i+=2;
            }
        }
        cout<<cnt<<endl;
    }
}