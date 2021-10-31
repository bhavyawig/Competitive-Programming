#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    if(test>=0 && test<40)
    {
        cout<<40-test;
    }
    else if(test>=40 && test<70)
    {
        cout<<70-test;
    }
    else if(test>=70 && test<90)
    {
        cout<<90-test;
    }
    else
    {
        cout<<"expert";
    }

    return 0;
}


