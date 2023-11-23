#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int yes=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='a' && s[i+1]=='b')
        yes++;
         if(s[i]=='b' && s[i+1]=='a')
        yes++;
    }
    if(yes>=1) cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}