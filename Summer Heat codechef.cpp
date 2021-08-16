
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int xa,xb,XA,XB;
        cin>>xa;cin>>xb;cin>>XA;cin>>XB;
        int c1,c2;
        c1=XA/xa;
        c2=XB/xb;
        cout<<c1+c2<<endl;
    }

    return 0;
}
