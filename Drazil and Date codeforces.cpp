#include<iostream>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    if(a<0)
    {
        a=-(a);
    }
    if(b<0)
    {
        b=-(b);
    }
    if(s>=(a+b) && (s-(a+b))%2==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
