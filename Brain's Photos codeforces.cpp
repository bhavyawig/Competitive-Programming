#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,black=0,colour=0;
    cin>>n;  cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            if(x=='W' || x=='G' || x=='B')
            {
                black++;
            }
            else
            {
                colour++;
            }
        }
    }
    if(colour>=1)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}

