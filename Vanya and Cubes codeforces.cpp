#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ht=0,sum=0,i=1;
    cin>>n;
    while(n>0){
    sum=sum+i;
    i++;
    n=n-sum;
    ht++;
    }
    if(n<0)
    {
        cout<<ht-1;
    }
    else{
    cout<<ht;
    }

    return 0;
}


