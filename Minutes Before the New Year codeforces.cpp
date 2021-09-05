#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int h,m;
        cin>>h;    cin>>m;
        int x=24-h;
        int l=(x*60)-m;
        cout<<l<<endl;
    }
    return 0;
}


