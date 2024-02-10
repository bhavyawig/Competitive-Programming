#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n; 
        cin>>n;
        lli a[n];
        lli neg=0,zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            zero++;
            if(a[i]<0)
            neg++;
        }
        if(zero>=1) cout<<"0"<<endl;
        else if(neg%2==0) {cout<<"1"<<endl; cout<<"1 0"<<endl;}
        else
        cout<<"0"<<endl;
    }
}
