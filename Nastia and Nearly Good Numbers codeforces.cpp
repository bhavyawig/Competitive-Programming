#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        lli a,b;
        cin>>a;    cin>>b;
        lli y=a*b;
        lli x=a;
        lli z=x+y;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else{
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}


