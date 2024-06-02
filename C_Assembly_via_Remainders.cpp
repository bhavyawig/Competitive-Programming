#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {

    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
       lli n;
       cin>>n;
       lli x[n];
       for(int i=0;i<n-1;i++)
       {
        cin>>x[i];
       }
       lli a[n];
       a[0]=501;
       for(int i=1;i<n;i++)
       {
        a[i]=a[i-1]+x[i-1];
       }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    }
    return 0;
}


