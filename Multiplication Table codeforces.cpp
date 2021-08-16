#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,x,i;
    int count=0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
