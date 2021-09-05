#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=n;
    int last=p%10;
    last=10-last;
    p=p/10;
    int slast=p%10;
    slast=10-slast;
    slast=slast*10;
    int ans=slast+last;
    cout<<ans-10<<endl;
    return 0;
}


