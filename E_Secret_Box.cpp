#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
         lli x,y,z,k;
        cin>>x>>y>>z>>k;
    lli maxi=0;
    for (lli i=1;i<=x;i++) 
    { 
        for (lli j=1;j<=y;j++) 
        {
            if (k%(i*j)==0 && (k/(i*j))<=z) 
            {
                maxi=max(maxi,(x-i+1)*(y-j+1)*(z-(k/(i*j))+1));
            }
        }
    }
    cout<<maxi<<endl; 
        }
    return 0;
}