#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        if(b>a){
        int len=b-a;
          if(len%2==0)
        {
            cout<<"2"<<endl;
        }
        else if(len%2!=0)
        {
            cout<<"1"<<endl;
        }}
        if(a>b)
        {
            int len1=a-b;
             if(len1%2==0)
        {
            cout<<"1"<<endl;
        }
        else if(len1%2!=0)
        {
            cout<<"2"<<endl;
        }
        }
    }
    return 0;
}

