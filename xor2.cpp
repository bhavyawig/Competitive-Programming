#include<iostream>
using namespace std;
#define m  1000000007

long long  power(long long x, long long y, long long p)
{
    long long  result=1;
    x=x%p;
    if(x==0)
    {
        return 0;
    }
    while(y>0)
    {
        if(y &1)
            result=(result*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return result;
}
int main()
{
    long long answer;
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        answer=power(2,n-1,m);
        cout<<answer<<endl;
    }
    return 0;
}
