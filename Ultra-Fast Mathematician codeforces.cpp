
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string x;
    string y;
    cin>>x;
    cin>>y;

    int len=x.length();
    int i;
    for(i=0;i<len;i++)
    {
        if(x[i]=='1' && y[i]=='1')
        {
            cout<<"0";
        }
        else if(x[i]=='0' && y[i]=='1')
        {
            cout<<"1";
        }
        else if(x[i]=='1' && y[i]=='0')
        {
            cout<<"1";
        }
        else if(x[i]=='0' && y[i]=='0')
        {
            cout<<"0";
        }
    }


    return 0;
}
