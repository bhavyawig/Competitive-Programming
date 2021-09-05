#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int a[5];
    a[0]=100;a[1]=20;a[2]=10;a[3]=5;a[4]=1;
    for(int i=0;i<5;i++)
    {
        count=count+(n/a[i]);
        n=n%a[i];
    }
    cout<<count<<endl;
    return 0;
}

