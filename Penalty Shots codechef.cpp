#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[10],count1=0,count2=0;
        for(int j=0;j<10;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<10;j=j+2)
        {
            if(a[j]==1)
            {
                count1++;
            }
        }
        for(int j=1;j<10;j=j+2)
        {
            if(a[j]==1)
            {
                count2++;
            }
        }
        if(count1==count2)
        {
            cout<<"0"<<endl;
        }
        else if(count1>count2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}

