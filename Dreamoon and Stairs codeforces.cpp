#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,div;
    cin>>n;    cin>>m;
    if(n%2==0)
    {
        div=n/2;
    }
    else
    {
        div=(n-1)/2;
        div++;
    }
    for(int i=div;i<=n;i++)
    {
        if(i%m==0)
        {
            cout<<i<<endl;
            exit(0);
        }
    }
    cout<<"-1";
    return 0;
}


