#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prb,mint,count=0,j=5;
    cin>>prb;
    cin>>mint;
    int l=240-mint;
    while(l>=j)
    {
        count++;
        l=l-j;
        j=j+5;
    }
    if(count>prb)
    {
        cout<<prb<<endl;
    }
    else
    {
        cout<<count<<endl;
    }
    return 0;
}

