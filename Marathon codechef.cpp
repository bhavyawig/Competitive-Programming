#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,D,A,B,C,d;
    cin>>T;

    int i;
    for(i=0;i<T;i++)
    {
        cin>>D>>d>>A>>B>>C;
        if(D*d>=42)
        {
            cout<<C<<endl;
        }
        else if(D*d>=21)
        {
            cout<<B<<endl;
        }
        else if(D*d>=10)
        {
            cout<<A<<endl;
        }
        else if(D*d<10)
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}
