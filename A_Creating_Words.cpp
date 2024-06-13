#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        string a,b;
        cin>>a>>b;
        char uf=a[0];
        a[0]=b[0];
        b[0]=uf;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}


