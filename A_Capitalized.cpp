#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    int no=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            continue;
        }
        else{
            no++;
            break;
        }
    }
    if(no==0)
    {
        if(s[0]>='A' && s[0]<='Z')
        cout<<"Yes";
        else
        cout<<"No";
    }
    else
    cout<<"No";
}