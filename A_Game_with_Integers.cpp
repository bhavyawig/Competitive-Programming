#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
     lli t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
        lli n;
        cin>>n;
        if(n%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
     }
    return 0;
}