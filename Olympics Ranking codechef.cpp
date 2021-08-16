#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int g1,s1,b1,g2,s2,b2;
        cin>>g1;cin>>s1;cin>>b1;
        cin>>g2;cin>>s2;cin>>b2;
        int one=g1+s1+b1;
        int two=g2+s2+b2;
        if(one>two)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}

