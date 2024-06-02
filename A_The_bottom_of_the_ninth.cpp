#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    int a[9];
    int b[8];
    int suma=0,sumb=0;
    for(int i=0;i<9;i++)
    {
        cin>>a[i];
        suma+=a[i];
    }
    for(int i=0;i<8;i++)
    {
        cin>>b[i];
        sumb+=b[i];
    }
    if(sumb>suma)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<suma-sumb+1<<endl;
    }
    return 0;
}


