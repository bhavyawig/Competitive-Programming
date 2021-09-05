#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[2];
    int count=0;
    cin>>a[0];  cin>>a[1];
    for(int i=0;i<5;i++)
    {
        char x,y;
        cin>>x;  cin>>y;
        if(x==a[0] || y==a[1])
        {
            count++;
        }
    }
    if(count>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}


