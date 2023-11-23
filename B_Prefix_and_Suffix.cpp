#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    string aage=t.substr(0,n);
    string peeche=t.substr(m-n,n);
    if(s==aage && s==peeche) cout<<"0";
    else if(s==aage) cout<<"1";
    else if(s==peeche) cout<<"2";
    else
    cout<<"3"; 
    return 0;
}