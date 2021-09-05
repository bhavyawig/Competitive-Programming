#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    if(k%2==0)
    {
        cout<<k/2<<endl;
        for(int i=0;i<k/2;i++)
        {
            cout<<"2"<<" ";
        }
    }
    else
    {
        k=k-3;
        cout<<(k/2)+1<<endl;
        cout<<"3"<<" ";
        for(int i=0;i<k/2;i++)
        {
            cout<<"2"<<" ";
        }
    }
    return 0;
}

