#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,t,i;
    cin>>n;   cin>>t;
    if(n==1 && t==10)
    {
        cout<<"-1";
    }
    else if(t<=9){
    for(int i=0;i<n;i++)
    {
        cout<<t;
    }}
    else if(t==10)
    {
         for(int i=0;i<n-1;i++)
    {
        cout<<"1";
    }
    cout<<"0";
    }
    return 0;
}


