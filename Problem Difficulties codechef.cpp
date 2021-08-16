#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[4];
        set<int> s;
        for(int j=0;j<4;j++)
        {
            cin>>a[j];
            s.insert(a[j]);
        }
        int len=s.size();
        if(len==1)
        {
            cout<<"0"<<endl;
        }
        else if(len==3)
        {
           cout<<"2"<<endl;
        }
        else if(len==4)
        {
           cout<<"2"<<endl;
        }
        else if(len==2)
        {
           int q=sizeof(a)/sizeof(a[0]);
           sort(a,a+q);
           if(a[1]==a[2])
           {
               cout<<"1"<<endl;
           }
           else
           {
               cout<<"2"<<endl;
           }
        }
    }
    return 0;
}

