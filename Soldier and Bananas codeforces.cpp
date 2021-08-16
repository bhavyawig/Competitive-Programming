#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    int j,cost=0;
    cin>>k>>n>>w;
        for(j=1;j<=w;j++)
        {
            cost=cost+k*j;
        }
    if(cost>n)
    {
        cout<<cost-n;
    }
    else if (n>=cost)
    {
        cout<<"0";
    }
    return 0;

}
