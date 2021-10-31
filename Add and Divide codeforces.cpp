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
        cin>>a;    cin>>b;
        if(b>a)
        {
            cout<<"1"<<endl;
        }
        else if(a==b)
        {
            cout<<"2"<<endl;
        }
        else
        {
            if(a%b==0)
            {
                cout<<a/b<<endl;
            }
            else
            {
                cout<<a/b+1<<endl;
            }
        }
    }
    return 0;
}


