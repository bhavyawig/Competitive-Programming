
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,b,count=0;
    cin>>k;cin>>a;cin>>b;
    int n1=k-a;
    int net=n1-b-1;
    if(net>=0)
    {
        for(int i=net;i<n1;i++)
        {count++;
        }

    }
    else{
        cout<<k-a;
        exit(0);
    }
    cout<<count;

    return 0;
}
