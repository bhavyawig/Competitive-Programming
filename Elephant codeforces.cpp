#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sum=5;
    cin>>n;
    while(sum<n)
    {
        sum=sum+5;
        count++;
    }
    count++;
    cout<<count;

    return 0;
}

