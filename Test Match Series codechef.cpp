#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        vector<lli> v;
        lli eng=0,ind=0;
        for(lli i=0;i<5;i++)
        {
            lli a;
            cin>>a;
            v.push_back(a);
            if(v[i]==1)
            {
                ind++;
            }
            if(v[i]==2)
            {
                eng++;
            }
        }
        if(ind<eng)
        {
            cout<<"ENGLAND"<<endl;
        }
        else if(ind>eng)
        {
            cout<<"INDIA"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }

    }

    return 0;
}

