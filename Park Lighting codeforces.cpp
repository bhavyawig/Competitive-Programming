#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,m;
        cin>>n;   cin>>m;
        int mul=n*m;
        if(mul%2==0)
        {
            cout<<mul/2<<endl;
        }
        else
        {
            cout<<(mul+1)/2<<endl;
        }
    }
    return 0;
}

