
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli n,k;
    cin>>n;
    cin>>k;
    if(n%2==0){
    if(n/2>=k)
    {
        cout<<(k*2)-1<<endl;
    }
    else
    {
        lli s=n/2;
        cout<<(k-s)*2<<endl;
    }}
    else
    {
        if((n/2)+1>=k)
    {
        cout<<(k*2)-1<<endl;
    }
    else
    {
        lli s=(n/2)+1;
        cout<<(k-s)*2<<endl;
    }
    }


    return 0;
}
