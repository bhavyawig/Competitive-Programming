
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    if(a>=b)
    {
        a=a-b;
        cout<<b<<" ";
        if(a<2)
        {
            cout<<"0";
        }
        else{
            cout<<a/2;
        }
    }
    else{
        b=b-a;
        cout<<a<<" ";
        if(b<2)
        {
            cout<<"0";
        }
        else{
            cout<<b/2;
        }
    }

    return 0;
}
