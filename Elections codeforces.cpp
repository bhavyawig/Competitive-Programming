#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli a,b,c;
        cin>>a;  cin>>b;  cin>>c;
        lli v=max(a,max(b,c));
        if(v==a && v==b && v==c)
        {
            cout<<"1 1 1"<<endl;
        }
        else if(v==a && v==b)
        {
            cout<<"1 1 "<<v+1-c<<endl;
        }
        else if(v==a && v==c)
        {
            cout<<"1 "<<v+1-b<<" 1"<<endl;
        }
        else if(v==b && v==c)
        {
            cout<<v+1-a<<" 1 1"<<endl;
        }
        else
        {
            if(v==a)
            {
               cout<<"0 "<<a+1-b<<" "<<a+1-c<<endl;
            }
            else if(v==b)
            {
                 cout<<b+1-a<<" "<<"0 "<<b+1-c<<endl;
            }
            else if(v==c)
            {
                cout<<c+1-a<<" "<<c+1-b<<" 0"<<endl;
            }
        }
    }
    return 0;
}

