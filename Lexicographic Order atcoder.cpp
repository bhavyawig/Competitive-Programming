#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s,t;
    cin>>s;  cin>>t;
    lli l=s.compare(t);
    if(l<0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}


