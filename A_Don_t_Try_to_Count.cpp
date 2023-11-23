#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t; cin>>t;
   for(int e=0;e<t;e++)
   {
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int ans=0,ok=0;
    int f=0;
    while(f<=7)
    {
        if(x.find(s)!=string::npos)
        {
            cout<< ans<<endl;
           ok++;
             break;
        }
        ans++;
        x+=x;
        f++;
    }
    if(ok==0)
    cout<<"-1"<<endl;
   }
    return 0;
}