#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    map<lli ,lli> x;
    x[x1]++;x[x2]++;x[x3]++;
    if(x[x1]==1)
        cout<<x1<<" ";
    else if(x[x2]==1)
        cout<<x2<<" ";
    else
        cout<<x3<<" ";
    map<lli,lli>y;
    y[y1]++;y[y2]++;y[y3]++;
    if(y[y1]==1)
        cout<<y1;
    else if(y[y2]==1)
        cout<<y2;
    else
        cout<<y3;


    return 0;
}

