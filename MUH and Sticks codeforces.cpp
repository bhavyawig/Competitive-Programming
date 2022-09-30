#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli a[6];
    map<lli,lli> m;
    for(lli i=0; i<6; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int x=0,y=0,ele=0,be=0;
    for(auto itr: m)
    {
        if(itr.second==6)
            ele++;
        if(itr.second==4)
            x++;
        if(itr.second==2)
            y++;
        if(itr.second==5)
            be++;
    }
     if(x==1 && y==1 || ele==1)
        cout<<"Elephant"<<endl;
    else if(x==1 || be==1)
        cout<<"Bear"<<endl;
    else
        cout<<"Alien"<<endl;

    return 0;
}


