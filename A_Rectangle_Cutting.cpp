#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli a,b;
        cin>>a>>b;
        if(a%2==0 && b%2==0) cout<<"Yes"<<endl;
        else if(a%2!=0 && b%2!=0) cout<<"No"<<endl;
        else
        {
            if((2*a)==b || (2*b)==a) cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
    }
}
