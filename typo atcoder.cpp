#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s,t;
    cin>>s;   cin>>t;
    lli len=s.length();
    lli count=0;
    lli arr[len],k=0;
    for(lli i=0;i<len-1;i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i+1]==t[i] && s[i]==t[i+1])
            {
                swap(s[i],s[i+1]);
            }
        }
    }
    if(s==t)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
