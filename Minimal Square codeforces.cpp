#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int a,b;
        cin>>a;   cin>>b;
        int x=max(2*a,b);
        int y=max(2*b,a);
        int w=min(x,y);
        cout<<w*w<<endl;
    }


    return 0;
}

