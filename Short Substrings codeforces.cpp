#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a;
        int len=a.length();
        cout<<a[0];
        for(int j=1;j<len;j=j+2)
        {
           cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}

