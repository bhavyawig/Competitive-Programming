#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   for(lli i=0;i<n;i++)
   {
    string s;
    cin>>s;
    if(s=="()")
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        int len=s.size();
        bool check=true;
        for(int i=1;i<s.length();i++)
        {
            if(s[i-1]==s[i])
            check=false;
        }
        if(check==true)
        {
            for(int i=0;i<len;i++)
            cout<<"(";
            for(int i=0;i<len;i++)
            cout<<")";
            cout<<endl;
        }
        else
        {
            for(int i=0;i<len;i++)
            cout<<"()";
            cout<<endl;
        }
    }
   }
    return 0;
}