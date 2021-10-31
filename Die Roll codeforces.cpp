#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli w,y;
    cin>>w>>y;
    lli ans=7-max(w,y);
    if(ans==0)
    {
        cout<<"0/1"<<endl;
    }
    else if(ans==1)
    {
        cout<<"1/6";
    }
    else if(ans==2)
    {
        cout<<"1/3";
    }
    else if(ans==3)
    {
        cout<<"1/2";
    }
    else if(ans==4)
    {
        cout<<"2/3";
    }
    else if(ans==5)
    {
        cout<<"5/6";
    }
    else
    {
        cout<<"1/1";
    }

    return 0;
}

