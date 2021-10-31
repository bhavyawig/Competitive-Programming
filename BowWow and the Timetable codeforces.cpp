#include<bits/stdc++.h>
using namespace std;
typedef long long float lli;

int main()
{
    string s;
    cin>>s;
    lli x=stoi(s,0,2);
    lli k=log(x)/log(4);
    //cout<<x<<endl;
    if(k==trunc(k))
    {
        cout<<k<<endl;
    }
    else{
    cout<<k+1<<endl;
    }
    return 0;
}
