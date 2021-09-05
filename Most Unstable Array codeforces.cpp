#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,m;
        cin>>n; cin>>m;
        cout<<min(2,n-1)*m<<endl;
    }
    return 0;
}

