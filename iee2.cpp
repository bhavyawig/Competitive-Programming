#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int func(int r)
{
    int sum=0;
    while(r>0 || sum>9)
    {
        if(r==0)
        {
            r=sum;
            sum=0;
        }
        sum=sum+(r%10);
        r=r/10;
    }
    return(sum==1);
}
int main()
{
    lli n;
    cin>>n;
    if(func(n))
    {
        cout<<"magic no"<<endl;
    }
    else
    {
        cout<<"not a magic no";
    }

    return 0;
}

