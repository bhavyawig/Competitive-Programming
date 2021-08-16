#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int d,x,y,z;
        cin>>d;cin>>x;cin>>y;cin>>z;
        int app1,app2;
        app1=7*x;
        app2=(y*d)+((7-d)*z);
        cout<<max(app1,app2)<<endl;
    }
    return 0;
}

