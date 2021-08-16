#include<iostream>
using namespace std;
int main()
{
    int n,m,z;
    int count=0,i,j;
    cin>>n>>m>>z;
    if(n>z || m>z || n==0)
    {
        cout<<"0";
    }
    else
    {
        for(i=1,j=1;i<=z,j<=z;i++,j++)
        {
            if(n*j<=z)
            {
                if(m*i<=z)
                {
                    count++;
                }
            }

        }
    }
    cout<<count;
    return 0;
}
