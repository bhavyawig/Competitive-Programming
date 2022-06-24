#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli cnt=0;
     for(lli i=0;i<n;i++){
        cnt+=(i+1)*(n-i)-i;
    }
    cout<<cnt<<endl;
    return 0;
}


