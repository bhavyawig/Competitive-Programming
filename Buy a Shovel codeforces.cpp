#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k;  cin>>r;
    int last=k%10;
    if(last==r || last==0)
    {
        cout<<"1"<<endl;
    }
    else if(last==5)
    {
        cout<<"2"<<endl;
    }
    else
    {
        for(int i=1;i<=9;i++)
        {
            if((last*i)%10==r || (last*i)%10==0)
            {
                cout<<i<<endl;
                exit(0);
            }
        }
    }
    return 0;
}

