#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        lli a,b,c,d,e;
        cin>>a;   cin>>b;  cin>>c;  cin>>d;  cin>>e;
        if(a+b+c<=d+e)
        {
           if((a+b<=d && c<=e) || (a+c<=d  && b<=e) || (b+c<=d && a<=e))
           {
               cout<<"yes"<<endl;
           }
           else
           {
               cout<<"no"<<endl;
           }
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}


