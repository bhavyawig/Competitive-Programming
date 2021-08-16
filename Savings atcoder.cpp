
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,count=0,i=1;
    cin>>n;
    while(sum<n)
    {
        sum=sum+i;
        i++;
        count++;
    }
    cout<<count;

    return 0;
}
