#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            cout<<" ";
            i=i+2;
        }
        else{
            cout<<s[i];
        }
    }

    return 0;
}

