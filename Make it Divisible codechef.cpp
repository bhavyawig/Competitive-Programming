#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        if(n%3!=0){
        for(lli i=0;i<n;i++)
        {
            cout<<"3";
        }
        cout<<endl;
        }
        else
        {
            for(lli i=0;i<n-1;i++)
        {
            cout<<"3";
        }
        cout<<"9";
        cout<<endl;
        }

    }

    return 0;
}


