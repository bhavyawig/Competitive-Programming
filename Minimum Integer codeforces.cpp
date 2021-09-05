#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        lli l,r,d;
        cin>>l;   cin>>r;  cin>>d;
        if(d<l || d>r)
        {
            cout<<d<<endl;
        }
        else
        {
            lli a=r/d+1;
            cout<<d*a<<endl;
        }
    }
    return 0;
}


