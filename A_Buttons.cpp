#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   for(lli e=0;e<t;e++)
   {
    lli a,b,c;
    cin>>a>>b>>c;
    if(c%2!=0)
    {
        b--;
        if(a==b)
        cout<<"Second"<<endl;
        else if(a>b)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
    else
    {
        a--;
        if(a==b)
        cout<<"First"<<endl;
        else if(a>b)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
   }
    return 0;
}